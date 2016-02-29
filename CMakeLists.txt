cmake_minimum_required (VERSION 2.6)
project (Test)
add_executable(test
    code/main.cpp)

include_directories(
    deps/glm-0.9.7.1/
    )
