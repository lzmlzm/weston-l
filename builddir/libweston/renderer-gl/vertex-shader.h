static const char vertex_shader[] = {
0x2f, 0x2a, 0x0a, 0x20, 0x2a, 0x20, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x32, 0x30, 0x31, 0x32, 0x20, 
 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x20, 0x43, 0x6f, 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x2a, 0x20, 
 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x32, 0x30, 0x31, 0x35, 0x2c, 0x32, 0x30, 0x31, 0x39, 0x20, 0x43, 
 0x6f, 0x6c, 0x6c, 0x61, 0x62, 0x6f, 0x72, 0x61, 0x2c, 0x20, 0x4c, 0x74, 0x64, 0x2e, 0x0a, 0x20, 0x2a, 0x20, 0x43, 0x6f, 0x70, 
 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x32, 0x30, 0x31, 0x36, 0x20, 0x4e, 0x56, 0x49, 0x44, 0x49, 0x41, 0x20, 0x43, 0x6f, 
 0x72, 0x70, 0x6f, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x2a, 0x0a, 0x20, 0x2a, 0x20, 0x50, 0x65, 0x72, 0x6d, 0x69, 
 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x73, 0x20, 0x68, 0x65, 0x72, 0x65, 0x62, 0x79, 0x20, 0x67, 0x72, 0x61, 0x6e, 0x74, 
 0x65, 0x64, 0x2c, 0x20, 0x66, 0x72, 0x65, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x63, 0x68, 0x61, 0x72, 0x67, 0x65, 0x2c, 0x20, 0x74, 
 0x6f, 0x20, 0x61, 0x6e, 0x79, 0x20, 0x70, 0x65, 0x72, 0x73, 0x6f, 0x6e, 0x20, 0x6f, 0x62, 0x74, 0x61, 0x69, 0x6e, 0x69, 0x6e, 
 0x67, 0x0a, 0x20, 0x2a, 0x20, 0x61, 0x20, 0x63, 0x6f, 0x70, 0x79, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x73, 
 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x61, 0x73, 0x73, 0x6f, 0x63, 0x69, 0x61, 0x74, 0x65, 
 0x64, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x73, 
 0x20, 0x28, 0x74, 0x68, 0x65, 0x0a, 0x20, 0x2a, 0x20, 0x22, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x22, 0x29, 0x2c, 
 0x20, 0x74, 0x6f, 0x20, 0x64, 0x65, 0x61, 0x6c, 0x20, 0x69, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x6f, 0x66, 0x74, 0x77, 
 0x61, 0x72, 0x65, 0x20, 0x77, 0x69, 0x74, 0x68, 0x6f, 0x75, 0x74, 0x20, 0x72, 0x65, 0x73, 0x74, 0x72, 0x69, 0x63, 0x74, 0x69, 
 0x6f, 0x6e, 0x2c, 0x20, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x69, 0x6e, 0x67, 0x0a, 0x20, 0x2a, 0x20, 0x77, 0x69, 0x74, 0x68, 
 0x6f, 0x75, 0x74, 0x20, 0x6c, 0x69, 0x6d, 0x69, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x72, 0x69, 
 0x67, 0x68, 0x74, 0x73, 0x20, 0x74, 0x6f, 0x20, 0x75, 0x73, 0x65, 0x2c, 0x20, 0x63, 0x6f, 0x70, 0x79, 0x2c, 0x20, 0x6d, 0x6f, 
 0x64, 0x69, 0x66, 0x79, 0x2c, 0x20, 0x6d, 0x65, 0x72, 0x67, 0x65, 0x2c, 0x20, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x73, 0x68, 0x2c, 
 0x0a, 0x20, 0x2a, 0x20, 0x64, 0x69, 0x73, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x2c, 0x20, 0x73, 0x75, 0x62, 0x6c, 0x69, 
 0x63, 0x65, 0x6e, 0x73, 0x65, 0x2c, 0x20, 0x61, 0x6e, 0x64, 0x2f, 0x6f, 0x72, 0x20, 0x73, 0x65, 0x6c, 0x6c, 0x20, 0x63, 0x6f, 
 0x70, 0x69, 0x65, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x2c, 
 0x20, 0x61, 0x6e, 0x64, 0x20, 0x74, 0x6f, 0x0a, 0x20, 0x2a, 0x20, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x74, 0x20, 0x70, 0x65, 0x72, 
 0x73, 0x6f, 0x6e, 0x73, 0x20, 0x74, 0x6f, 0x20, 0x77, 0x68, 0x6f, 0x6d, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x6f, 0x66, 0x74, 
 0x77, 0x61, 0x72, 0x65, 0x20, 0x69, 0x73, 0x20, 0x66, 0x75, 0x72, 0x6e, 0x69, 0x73, 0x68, 0x65, 0x64, 0x20, 0x74, 0x6f, 0x20, 
 0x64, 0x6f, 0x20, 0x73, 0x6f, 0x2c, 0x20, 0x73, 0x75, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x20, 0x74, 0x6f, 0x0a, 0x20, 0x2a, 0x20, 
 0x74, 0x68, 0x65, 0x20, 0x66, 0x6f, 0x6c, 0x6c, 0x6f, 0x77, 0x69, 0x6e, 0x67, 0x20, 0x63, 0x6f, 0x6e, 0x64, 0x69, 0x74, 0x69, 
 0x6f, 0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x2a, 0x0a, 0x20, 0x2a, 0x20, 0x54, 0x68, 0x65, 0x20, 0x61, 0x62, 0x6f, 0x76, 0x65, 0x20, 
 0x63, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x6e, 0x6f, 0x74, 0x69, 0x63, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 
 0x74, 0x68, 0x69, 0x73, 0x20, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x6e, 0x6f, 0x74, 0x69, 0x63, 
 0x65, 0x20, 0x28, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x0a, 0x20, 0x2a, 0x20, 0x6e, 
 0x65, 0x78, 0x74, 0x20, 0x70, 0x61, 0x72, 0x61, 0x67, 0x72, 0x61, 0x70, 0x68, 0x29, 0x20, 0x73, 0x68, 0x61, 0x6c, 0x6c, 0x20, 
 0x62, 0x65, 0x20, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x20, 0x61, 0x6c, 0x6c, 0x20, 0x63, 0x6f, 
 0x70, 0x69, 0x65, 0x73, 0x20, 0x6f, 0x72, 0x20, 0x73, 0x75, 0x62, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x0a, 0x20, 
 0x2a, 0x20, 0x70, 0x6f, 0x72, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x6f, 0x66, 
 0x74, 0x77, 0x61, 0x72, 0x65, 0x2e, 0x0a, 0x20, 0x2a, 0x0a, 0x20, 0x2a, 0x20, 0x54, 0x48, 0x45, 0x20, 0x53, 0x4f, 0x46, 0x54, 
 0x57, 0x41, 0x52, 0x45, 0x20, 0x49, 0x53, 0x20, 0x50, 0x52, 0x4f, 0x56, 0x49, 0x44, 0x45, 0x44, 0x20, 0x22, 0x41, 0x53, 0x20, 
 0x49, 0x53, 0x22, 0x2c, 0x20, 0x57, 0x49, 0x54, 0x48, 0x4f, 0x55, 0x54, 0x20, 0x57, 0x41, 0x52, 0x52, 0x41, 0x4e, 0x54, 0x59, 
 0x20, 0x4f, 0x46, 0x20, 0x41, 0x4e, 0x59, 0x20, 0x4b, 0x49, 0x4e, 0x44, 0x2c, 0x0a, 0x20, 0x2a, 0x20, 0x45, 0x58, 0x50, 0x52, 
 0x45, 0x53, 0x53, 0x20, 0x4f, 0x52, 0x20, 0x49, 0x4d, 0x50, 0x4c, 0x49, 0x45, 0x44, 0x2c, 0x20, 0x49, 0x4e, 0x43, 0x4c, 0x55, 
 0x44, 0x49, 0x4e, 0x47, 0x20, 0x42, 0x55, 0x54, 0x20, 0x4e, 0x4f, 0x54, 0x20, 0x4c, 0x49, 0x4d, 0x49, 0x54, 0x45, 0x44, 0x20, 
 0x54, 0x4f, 0x20, 0x54, 0x48, 0x45, 0x20, 0x57, 0x41, 0x52, 0x52, 0x41, 0x4e, 0x54, 0x49, 0x45, 0x53, 0x20, 0x4f, 0x46, 0x0a, 
 0x20, 0x2a, 0x20, 0x4d, 0x45, 0x52, 0x43, 0x48, 0x41, 0x4e, 0x54, 0x41, 0x42, 0x49, 0x4c, 0x49, 0x54, 0x59, 0x2c, 0x20, 0x46, 
 0x49, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x20, 0x46, 0x4f, 0x52, 0x20, 0x41, 0x20, 0x50, 0x41, 0x52, 0x54, 0x49, 0x43, 0x55, 0x4c, 
 0x41, 0x52, 0x20, 0x50, 0x55, 0x52, 0x50, 0x4f, 0x53, 0x45, 0x20, 0x41, 0x4e, 0x44, 0x0a, 0x20, 0x2a, 0x20, 0x4e, 0x4f, 0x4e, 
 0x49, 0x4e, 0x46, 0x52, 0x49, 0x4e, 0x47, 0x45, 0x4d, 0x45, 0x4e, 0x54, 0x2e, 0x20, 0x20, 0x49, 0x4e, 0x20, 0x4e, 0x4f, 0x20, 
 0x45, 0x56, 0x45, 0x4e, 0x54, 0x20, 0x53, 0x48, 0x41, 0x4c, 0x4c, 0x20, 0x54, 0x48, 0x45, 0x20, 0x41, 0x55, 0x54, 0x48, 0x4f, 
 0x52, 0x53, 0x20, 0x4f, 0x52, 0x20, 0x43, 0x4f, 0x50, 0x59, 0x52, 0x49, 0x47, 0x48, 0x54, 0x20, 0x48, 0x4f, 0x4c, 0x44, 0x45, 
 0x52, 0x53, 0x0a, 0x20, 0x2a, 0x20, 0x42, 0x45, 0x20, 0x4c, 0x49, 0x41, 0x42, 0x4c, 0x45, 0x20, 0x46, 0x4f, 0x52, 0x20, 0x41, 
 0x4e, 0x59, 0x20, 0x43, 0x4c, 0x41, 0x49, 0x4d, 0x2c, 0x20, 0x44, 0x41, 0x4d, 0x41, 0x47, 0x45, 0x53, 0x20, 0x4f, 0x52, 0x20, 
 0x4f, 0x54, 0x48, 0x45, 0x52, 0x20, 0x4c, 0x49, 0x41, 0x42, 0x49, 0x4c, 0x49, 0x54, 0x59, 0x2c, 0x20, 0x57, 0x48, 0x45, 0x54, 
 0x48, 0x45, 0x52, 0x20, 0x49, 0x4e, 0x20, 0x41, 0x4e, 0x0a, 0x20, 0x2a, 0x20, 0x41, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x4f, 
 0x46, 0x20, 0x43, 0x4f, 0x4e, 0x54, 0x52, 0x41, 0x43, 0x54, 0x2c, 0x20, 0x54, 0x4f, 0x52, 0x54, 0x20, 0x4f, 0x52, 0x20, 0x4f, 
 0x54, 0x48, 0x45, 0x52, 0x57, 0x49, 0x53, 0x45, 0x2c, 0x20, 0x41, 0x52, 0x49, 0x53, 0x49, 0x4e, 0x47, 0x20, 0x46, 0x52, 0x4f, 
 0x4d, 0x2c, 0x20, 0x4f, 0x55, 0x54, 0x20, 0x4f, 0x46, 0x20, 0x4f, 0x52, 0x20, 0x49, 0x4e, 0x0a, 0x20, 0x2a, 0x20, 0x43, 0x4f, 
 0x4e, 0x4e, 0x45, 0x43, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x57, 0x49, 0x54, 0x48, 0x20, 0x54, 0x48, 0x45, 0x20, 0x53, 0x4f, 0x46, 
 0x54, 0x57, 0x41, 0x52, 0x45, 0x20, 0x4f, 0x52, 0x20, 0x54, 0x48, 0x45, 0x20, 0x55, 0x53, 0x45, 0x20, 0x4f, 0x52, 0x20, 0x4f, 
 0x54, 0x48, 0x45, 0x52, 0x20, 0x44, 0x45, 0x41, 0x4c, 0x49, 0x4e, 0x47, 0x53, 0x20, 0x49, 0x4e, 0x20, 0x54, 0x48, 0x45, 0x0a, 
 0x20, 0x2a, 0x20, 0x53, 0x4f, 0x46, 0x54, 0x57, 0x41, 0x52, 0x45, 0x2e, 0x0a, 0x20, 0x2a, 0x2f, 0x0a, 0x0a, 0x75, 0x6e, 0x69, 
 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x70, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 
 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 
 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 
 0x64, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 
 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 
 0x0a, 0x09, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x70, 0x72, 0x6f, 0x6a, 0x20, 
 0x2a, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 
 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x09, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 
 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x7d, 0x0a, 
0
};

