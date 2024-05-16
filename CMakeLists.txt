cmake_minimum_required(VERSION 3.12)
project(GameOfLife)

set(CMAKE_CXX_STANDARD 17)

# Add your source files here
file(GLOB SOURCES "*.cpp")

# Add any additional include directories here
include_directories(include)

# Add any additional libraries here
# find_package(YourLibrary REQUIRED)

add_executable(GameOfLife ${SOURCES})

# Link any additional libraries here
# target_link_libraries(GameOfLife YourLibrary)