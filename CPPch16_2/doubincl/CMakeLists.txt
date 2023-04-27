cmake_minimum_required(VERSION 3.0.0)
project(USE_HEADER VERSION 0.1.0)

include_directories(include)#添加头文件
aux_source_directory(src SRC_SUB)
aux_source_directory(. SRC_CUR)
add_executable(doubincl ${SRC_SUB} ${SRC_CUR})


 
