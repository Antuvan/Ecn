cmake_minimum_required(VERSION 3.4)
project(mobile_robot)

set(CMAKE_CXX_STANDARD 11)

# all include libraries
include_directories(include)

add_definitions(-DSCRIPT_PATH="${CMAKE_CURRENT_SOURCE_DIR}/src/plot.py")

# Robot library
add_library(lab2 SHARED src/robot.cpp include/robot.h include/geom.h
                        include/envir.h src/envir.cpp
                        include/sensor.h include/sensor_range.h
                        include/sensor_bearing.h)
                        
add_executable(move_robot src/main.cpp)
target_link_libraries(move_robot lab2)
