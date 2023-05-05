cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(SGL LANGUAGES C CXX)

# Set the C++ standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find and link the required macOS frameworks
if(APPLE)
    find_library(COCOA_LIBRARY Cocoa)
    find_library(FOUNDATION_LIBRARY Foundation)
    find_library(APPKIT_LIBRARY AppKit)
endif()

# Collect all .c and .m files in the SGL/src folder and its subdirectories, and all .h files in SGL/include
file(GLOB_RECURSE SGL_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/SGL/src/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/SGL/src/*.m"
    "${CMAKE_CURRENT_SOURCE_DIR}/SGL/include/*.h"
)

# Add the SGL library
add_library(sgl STATIC ${SGL_SOURCES})

# Set the include directories for the SGL library
target_include_directories(sgl 
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/SGL/src>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/SGL/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/SGL/include/SGL>
    PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR}/SGL/include/SGL
)

# Link the SGL library with the required macOS frameworks
if(APPLE)
    target_link_libraries(sgl ${COCOA_LIBRARY} ${FOUNDATION_LIBRARY} ${APPKIT_LIBRARY}  "-framework Cocoa")
endif()

# Add the app executable
add_executable(app app/main.cpp)

# Link the app to the SGL library
target_link_libraries(app sgl)
