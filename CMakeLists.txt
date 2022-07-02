cmake_minimum_required(VERSION 3.10)

# set the project name
project(drawthing)

add_definitions(-std=c++17)
# add the executable

set(SOURCES
  src/main.cpp
)

set(INCLUDE_DIRECTORIES
  include
)


add_executable(Drawthing ${SOURCES})