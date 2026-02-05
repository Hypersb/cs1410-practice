cmake_minimum_required(VERSION 3.20)
project(cpp_starter_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp)
add_executable(firstcode src/firstcode.cpp)
add_executable(secondcode src/secondcode.cpp)
add_executable(thirdcode src/thirdcode.cpp)
add_executable(fourthcode src/fourthcode.cpp)
add_executable(fifthcode src/fifthcode.cpp)
add_executable(assignment2 src/assignment2.cpp)
add_executable(ex0301 src/ex0301.cpp)
add_executable(ex0302 src/ex0302.cpp)
add_executable(ex0401 src/ex0401.cpp)
add_executable(ex0402 src/ex0402.cpp)