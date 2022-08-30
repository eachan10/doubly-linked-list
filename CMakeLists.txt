cmake_minimum_required(VERSION 3.10)

project(DoublyLinkedList)

add_executable(main main.c)

add_library(linkedlist linkedlist.c)

target_link_libraries(main linkedlist)