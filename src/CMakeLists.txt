cmake_minimum_required( VERSION 3.12.4 )

set(xtl_DIR ../lib/cmake/xtl)
set(xtensor_DIR ../lib/cmake/xtensor)

## Required software
find_package( xtl REQUIRED )
find_package( xtensor REQUIRED )

## Sources and headers
include_directories( ${CMAKE_CURRENT_SOURCE_DIR} ../include)

## Find all source files to be compiled into object files
file( GLOB SOURCES *.cc *.cpp )

## C++ compiler options
set( CMAKE_CXX_FLAGS "-Wall -Wextra" )
set( CMAKE_CXX_FLAGS_DEBUG "-g -O0" )
set( CMAKE_CXX_FLAGS_RELEASE "-O3" )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

## Source file containing the "main" function
set( MAIN_SOURCES main.cpp )
## Specify a name for the generated executable file
set( MAIN_EXE_NAME anonymizer )

## 1. Compile...
add_executable( ${MAIN_EXE_NAME} ${MAIN_SOURCES}
                                 ${SOURCES}
              )

## 2. Link...
target_link_libraries( ${MAIN_EXE_NAME} )

## 3. Install...
install( TARGETS ${MAIN_EXE_NAME}
         RUNTIME DESTINATION bin )
