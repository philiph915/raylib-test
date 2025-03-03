cmake_minimum_required(VERSION 3.10)
project(MyRaylibGame)

# Set the path to the Raylib source directory
set(RAYLIB_DIR "${CMAKE_SOURCE_DIR}/../Libraries/raylib")

# Add Raylib as a subdirectory to handle the CMake configuration
add_subdirectory(${RAYLIB_DIR} ${CMAKE_BINARY_DIR}/raylib_build)

# Path to your include files
set(MY_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

# Add your own include directory
include_directories("${MY_INCLUDE_DIR}")

# List all your source files explicitly
set(SOURCES
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/ball.cpp
    # Add any other .cpp files here
)

# Add executable target and specify all source files
add_executable(MyGame ${SOURCES})

# Link Raylib
target_link_libraries(MyGame raylib)
