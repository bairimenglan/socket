cmake_minimum_required(VERSION 3.12)
project(xmltest)

set(CMAKE_CXX_STANDARD 11)

add_executable(xmltest main.cpp tinystr.cpp tinyxml.cpp tinyxmlerror.cpp tinyxmlparser.cpp)