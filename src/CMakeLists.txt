cmake_minimum_required(VERSION 3.21)

add_executable(DZ25_2 main.cpp CPU.cpp GPU.cpp disk.cpp KBD.cpp RAM.cpp)

target_include_directories(DZ25_2 PUBLIC ${CMAKE_SOURCE_DIR}/include)