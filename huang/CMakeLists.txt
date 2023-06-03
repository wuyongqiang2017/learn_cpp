cmake_minimum_required(VERSION 3.15)
project(huang)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)

find_package(PkgConfig REQUIRED)
find_package(Threads REQUIRED)
pkg_check_modules(YamlCpp REQUIRED yaml-cpp) # 0.6.3

include_directories(
    ${YamlCpp_INCLUDE_DIRS}
)

link_directories (
    ${YamlCpp_LIBRARY_DIRS}
)

add_executable(${PROJECT_NAME}_runner
    src/global_data/global_data.cc
    main.cc
)

# 链接库
target_link_libraries(${PROJECT_NAME}_runner
    ${YamlCpp_LIBRARIES}
    Threads::Threads
)

file(COPY conf/test.yaml DESTINATION ${CMAKE_BINARY_DIR}/conf)