
include_directories(source)

add_executable(Algorithm main.cpp)

add_subdirectory(source)

target_link_libraries(Algorithm controller)