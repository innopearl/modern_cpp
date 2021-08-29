cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-g -Wall")
project(modern_cpp)

add_executable(test_json
  tests/test_json.cpp
)

target_include_directories(test_json PUBLIC "${CMAKE_SOURCE_DIR}/dependencies/json/include")

