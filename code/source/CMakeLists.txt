
set(LEETCODE_INCLUDE leetcode regex controller)

include_directories(${LEETCODE_INCLUDE})

add_subdirectory(controller)
add_subdirectory(leetcode)
add_subdirectory(regex)


target_link_libraries(controller leetcode regex)