cmake_minimum_required(VERSION 3.17)
project(numeric_analyze C)

set(CMAKE_C_STANDARD 99)

include_directories(./include)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

add_library(fsolve SHARED src/fsolve.c)
add_executable(numeric_analyze_static_build src/main.c src/fsolve.c)
add_executable(numeric_analyze_dynamic_build src/main.c)
target_link_libraries(numeric_analyze_dynamic_build fsolve)

message(${PROJECT_SOURCE_DIR})

#set_target_properties(
#        fsolve
#        PROPERTIES
#        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib
#)
#set_target_properties(fsolve PROPERTIES LIBRARY_OUTPUT_DIRECTORY ./lib)
#add_executable(fsolve main.c)
#add_executable(numeric_analyze main.c fsolve.h fsolve.c)  # 静态编译单文件
