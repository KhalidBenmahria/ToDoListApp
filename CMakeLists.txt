cmake_minimum_required(VERSION 3.16)

project(ToDoListApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ToDoListApp main.cpp
    todolist.h
    todolist.cpp)

include(GNUInstallDirs)
install(TARGETS ToDoListApp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
