cmake_minimum_required(VERSION 3.15)
project(day2)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}_runner
#    src/code_reference.cc # 加这行报错
    main.cpp
)

# 链接库
target_link_libraries(${PROJECT_NAME}_runner
    ${TARGET_NAME}
)