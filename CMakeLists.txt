cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(SGL LANGUAGES C CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find and link the required macOS frameworks
if(APPLE)
    find_library(COCOA_LIBRARY Cocoa)
    find_library(FOUNDATION_LIBRARY Foundation)
endif()

# Add the SGL library
add_library(sgl STATIC
    SGL/src/sgl_errors.c
    SGL/src/cocoa/sgl_window.m
)

# Set the include directories for the SGL library
target_include_directories(sgl PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/SGL/include>
    $<INSTALL_INTERFACE:include>
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/SGL/include/SGL
)

# Link the SGL library with the required macOS frameworks
if(APPLE)
    target_link_libraries(sgl ${COCOA_LIBRARY} ${FOUNDATION_LIBRARY} "-framework CoreGraphics") # Add "-framework CoreGraphics"
endif()

# Add the app executable
add_executable(app app/main.cpp)

# Link the app to the SGL library
target_link_libraries(app sgl)
