#cmake最低版本要求
cmake_minimum_required(VERSION 3.16)
#项目信息
project(Algorithm)

#设置C++标准
set(CMAKE_CXX_STANDARD 14)

#添加yaml库文件
include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${PROJECT_SOURCE_DIR}/libs)

add_subdirectory(code)

target_link_libraries(Algorithm libyaml-cpp.a libtest.a)

#C:\Code\Project\Algorithm\config\

#include_directories(include/)
#include_directories(src/leetcode)
#include_directories(src/string)

#将源文件编译为一个名称为XXX的可执行文件
#add_executable(Algorithm )

# ==================同一目录，多个源文件============================
#查找当前目录下的所有源文件
#并将名称保存到 variable 变量
# aux_source_directory(<dir> variable)
# add_executable(Algorithm $variable)

# ==================多个目录，多个源文件============================
# 将不同目录里的文件编译成静态库再由 main 函数调用
# 添加 子目录
# add_subdirectory()
# 添加链接库
# target_link_libraries()


# ================== cmakelists B============================
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
#aux_source_directory(. DIR_LIB_SRCS)
# 指定生成 MathUtils 链接库
# add_library (MathUtils ${DIR_LIB_SRCS})#命令 add_library 将 src 目录中的源文件编译为静态链接库。

#cmake -G "Unix Makefiles"   ------make.exe
#cmake -G "MinGW Makefiles"  ------mingw32-make
