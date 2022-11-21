cmake_minimum_required(VERSION 3.3)
project(M4AP)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated")

find_package (OpenGL REQUIRED)

# Including GLFW
add_subdirectory(glfw)
include_directories(${OPENGL_INCLUDE_DIR} glfw/include)

file(GLOB SOURCE_FILES
        *.cpp
        *.h
        )

add_executable(M4AP ${SOURCE_FILES})

target_link_libraries (M4AP ${OPENGL_LIBRARIES} glfw)



#cmake_minimum_required(VERSION 3.3)
#project(M4AP)
#
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
#
## Including GLFW
#add_subdirectory(glfw)
#include_directories(glfw/include)
#
#file(GLOB SOURCE_FILES
#        *.cpp
#        *.h
#        )
#set(SOURCE_FILES graphics.cpp)
#
#add_executable(M4AP ${SOURCE_FILES})
#
## Linking GLFW
#target_link_libraries(M4AP glfw ${GLFW_LIBRARIES})
