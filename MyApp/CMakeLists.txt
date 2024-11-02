cmake_minimum_required(VERSION 3.10)
project(MyApp)


set(CMAKE_CXX_STANDARD 17)


include_directories(include)
add_executable(MyApp src/main.cpp src/tema1.cpp)
