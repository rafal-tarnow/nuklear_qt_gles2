#pragma once

const static int size_of_prev = 701;

unsigned char prev[size_of_prev] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x08, 0x06, 0x00, 0x00, 0x00, 0xc3, 0x3e, 0x61, 0xcb, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x19, 0x00, 0x19, 0x00, 0x19, 0xe3, 0x2f, 0x7e, 0xb3, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xdf, 0x0c, 0x07, 0x0c, 0x16, 0x20, 0x59, 0x77, 0xbd, 0x99, 0x00, 0x00, 0x02, 0x4a, 0x49, 0x44, 0x41, 0x54, 0x78, 
	0xda, 0xed, 0xdd, 0x51, 0x6e, 0xc2, 0x30, 0x14, 0x44, 0xd1, 0xc6, 0x62, 0x13, 0xd9, 0x22, 0x0b, 0x62, 0xbb, 0xf4, 0xa7, 0x91, 0xaa, 0x06, 0x93, 0x92, 0xe2, 0xd8, 0xcd, 0x9c, 0xf9, 0x6c, 0x41, 0xa9, 0x7c, 0x6f, 0xe6, 0x3d, 0xa2, 0x4a, 0x4c, 0xf3, 0x3c, 0x7f, 0x48, 0x6e, 0x8a, 0x23, 0x20, 0x80, 0x10, 0x40, 0x08, 0x20, 0x04, 0x10, 0x02, 0x08, 0x01, 0x84, 0x00, 0x42, 0x00, 0xc9, 0xc8, 0x65, 0xcf, 0x9b, 0x6e, 0xb7, 0xdb, 0xbd, 0xf6, 0xbb, 0xeb, 0xf5, 0x3a, 0x39, 0xd6, 0xe3, 0x53, 0x63, 0xb2, 0xc5, 0x63, 0xfa, 0xcd, 0xa3, 0xe0, 0x67, 0xc0, 0x9f, 0x85, 0x0c, 0x7d, 0xa0, 0xbf, 0xc2, 0xa2, 0xb4, 0x82, 
	0xff, 0xd7, 0xf7, 0xca, 0x7b, 0xcf, 0xb6, 0xf6, 0xfa, 0x6a, 0x03, 0xbc, 0x1b, 0x9e, 0x36, 0xe8, 0x03, 0x7e, 0x8b, 0xc3, 0x43, 0x01, 0x5a, 0xdd, 0xb9, 0x24, 0xe8, 0x07, 0xbe, 0xc6, 0x61, 0x25, 0x40, 0xeb, 0xda, 0x26, 0xc1, 0x18, 0x63, 0x74, 0xe1, 0x50, 0x8e, 0x9e, 0xd9, 0xf6, 0x82, 0xb1, 0xce, 0xea, 0xe2, 0x98, 0x33, 0xc1, 0xaf, 0x3e, 0x05, 0x1c, 0x79, 0x51, 0x2d, 0x50, 0x3f, 0x97, 0xa3, 0xcf, 0xc6, 0x93, 0xc0, 0x50, 0xf0, 0xcb, 0xf5, 0x4a, 0xaf, 0x3b, 0x52, 0x0b, 0x8c, 0x71, 0x0e, 0x76, 0x80, 0x50, 0xf0, 0x04, 0x08, 0x07, 0x4f, 0x00, 0x23, 0xcf, 0x12, 0x68, 0xdf, 0xe9, 0x2c, 0xc0, 0xd9, 0x17, 
	0xc1, 0x1e, 0xdb, 0xbd, 0x11, 0xe0, 0x8e, 0x37, 0x02, 0xc0, 0xd7, 0x00, 0xc0, 0x13, 0x00, 0x78, 0x02, 0x00, 0x6f, 0x07, 0x00, 0x5f, 0x03, 0x00, 0x4f, 0x00, 0xe0, 0x09, 0x00, 0xbc, 0x1d, 0x00, 0x7c, 0x0d, 0x00, 0x3c, 0x01, 0x80, 0x37, 0x02, 0xc0, 0xd7, 0x00, 0xe9, 0xe0, 0xa3, 0x05, 0x00, 0x3e, 0x54, 0x00, 0xe0, 0x83, 0x77, 0x00, 0xf0, 0x43, 0x1b, 0x00, 0xf8, 0x50, 0x01, 0x80, 0x0f, 0x15, 0x00, 0xf8, 0xe0, 0x1d, 0x00, 0xfc, 0xd0, 0x06, 0x00, 0x3e, 0x54, 0x00, 0xe0, 0x43, 0x05, 0x00, 0x3e, 0x78, 0x07, 0x00, 0x3f, 0xb4, 0x01, 0x80, 0x0f, 0x15, 0x00, 0xf8, 0xe0, 0x11, 0x00, 0x7e, 0x68, 0x03, 0x00, 
	0x1f, 0x2a, 0x00, 0xf0, 0xc1, 0x23, 0x00, 0xfc, 0x60, 0x01, 0xc0, 0x0f, 0x16, 0x00, 0x7c, 0x0d, 0x20, 0x04, 0x10, 0x02, 0x08, 0x01, 0x84, 0x00, 0x42, 0x00, 0x21, 0x80, 0x10, 0x40, 0x08, 0x20, 0x04, 0x10, 0x02, 0xc8, 0xb9, 0x05, 0xf0, 0x35, 0x72, 0x1a, 0x80, 0x04, 0x46, 0x00, 0x09, 0xec, 0x00, 0x5f, 0x12, 0x10, 0xc1, 0x12, 0x48, 0x04, 0x9f, 0x02, 0x8c, 0x05, 0x02, 0x68, 0x03, 0x02, 0x10, 0x81, 0x00, 0x44, 0x20, 0x80, 0xfd, 0x80, 0x00, 0xda, 0x80, 0x00, 0x44, 0x20, 0x80, 0xb1, 0x40, 0x00, 0x6d, 0x40, 0x00, 0x22, 0x10, 0x80, 0x08, 0x04, 0xb0, 0x1f, 0x10, 0x40, 0x1b, 0x10, 0x80, 0x08, 0x04, 0x20, 
	0x02, 0x01, 0xec, 0x07, 0x04, 0xd0, 0x06, 0x04, 0x20, 0x02, 0x01, 0x88, 0x40, 0x00, 0xfb, 0x01, 0x01, 0xb4, 0x01, 0x01, 0x88, 0x40, 0x00, 0x63, 0x81, 0x00, 0xda, 0x80, 0x00, 0x44, 0x20, 0x00, 0x11, 0x08, 0x60, 0x3f, 0x20, 0x80, 0x36, 0x18, 0x51, 0x80, 0xb3, 0x3f, 0x64, 0xf9, 0x0f, 0x22, 0x68, 0x80, 0x70, 0x11, 0x08, 0x10, 0xde, 0x78, 0x04, 0x08, 0x6f, 0x03, 0x02, 0x84, 0x8b, 0x50, 0x7a, 0x55, 0x93, 0xff, 0xc9, 0x1b, 0x43, 0x04, 0x0d, 0x10, 0xba, 0x1f, 0x2c, 0xd7, 0x2b, 0x3d, 0xfe, 0x00, 0x77, 0xff, 0x38, 0x6d, 0xa0, 0x01, 0xc2, 0x45, 0x28, 0x47, 0xdf, 0x99, 0xee, 0xfe, 0xb1, 0xce, 0x6a, 0x9a, 
	0xe7, 0x79, 0xf5, 0xc3, 0x56, 0x5f, 0xe5, 0x06, 0xfe, 0xfe, 0xbc, 0x93, 0xc9, 0x77, 0x0e, 0x0f, 0x05, 0x68, 0x21, 0x01, 0xf8, 0x63, 0x88, 0xf0, 0x93, 0x43, 0x55, 0x80, 0x56, 0x17, 0x94, 0x7e, 0x22, 0x3c, 0x62, 0x51, 0x5a, 0x02, 0x04, 0x7f, 0x9c, 0xfd, 0xa0, 0xf6, 0xfa, 0xcd, 0x06, 0x78, 0xd5, 0x3e, 0xd0, 0xc7, 0x6a, 0x84, 0x2d, 0x1e, 0xbb, 0x04, 0x90, 0xf3, 0xc4, 0x73, 0x00, 0x02, 0x08, 0x01, 0x84, 0x00, 0x42, 0x00, 0x21, 0x80, 0x10, 0x40, 0x08, 0x20, 0x04, 0x90, 0x90, 0x7c, 0x02, 0x2c, 0x60, 0x54, 0x90, 0xb3, 0xfa, 0x18, 0x92, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 
	0x82, 
};
