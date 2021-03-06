#include "system_paths.hpp"
#include "system_log.hpp"

#include <cstdlib>

#ifdef __ANDROID__
#include <stdlib.h>
#endif

string getStandardCommonReadWriteDirecory()
{
#if   defined(__ANDROID__)
    string text = getenv("EXTERNAL_STORAGE");
    return text;
#elif defined(__linux__) //&& !defined(__ANDROID__)
    string text = getenv("HOME");
    return text;
#endif
}


string mConfigPath;

void systemInput_initConfigPath(string configPath)
{
    mConfigPath = configPath;
}

string getAppConfigFilePath()
{
    if(mConfigPath.empty())
    {
        LOGD("ERROR Config path must be inited by system before use!");
        exit(EXIT_FAILURE);
    } else
    {
        return mConfigPath;
    }
}
