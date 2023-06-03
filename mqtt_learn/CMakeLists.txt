cmake_minimum_required(VERSION 3.15)
project(mqtt_learn)

set(CMAKE_CXX_STANDARD 14)

find_package(PahoMqttCpp REQUIRED)
find_package(Protobuf REQUIRED)
file(GLOB SOURCES "trunk_protos_cpp/common/*.cc")

add_executable(
    ${PROJECT_NAME}_runner
    main.cpp
    ${SOURCES}
)

# 链接库
target_link_libraries(
    mqtt_learn_runner
    PahoMqttCpp::paho-mqttpp3
    ${PROTOBUF_LIBRARIES}
)