cmake_minimum_required(VERSION 3.0.0)
project(mall VERSION 0.3.0)

include_directories(include)#添加头文件
aux_source_directory(src SRC_SUB)
aux_source_directory(. SRC_CUR)
add_executable(mall ${SRC_SUB} ${SRC_CUR})


 
