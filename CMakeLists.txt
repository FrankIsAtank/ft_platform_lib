# CMake version expected
cmake_minimum_required(VERSION 3.18)

# Project title
project(FT_PLATFORM_LIB)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# specify source file directories
set(DIR_SRC "${FT_PLATFORM_LIB_SOURCE_DIR}/src")
set(DIR_BASE "${DIR_SRC}/base")
set(DIR_PROCLOOP "${DIR_SRC}/procloop")

# source files

file (GLOB CPP_FULL "")
file (GLOB HPP_FULL "")

# source : base
file(GLOB_RECURSE SRC_BASE_CPP ${DIR_BASE}/*.cpp)
file(GLOB_RECURSE SRC_BASE_HPP ${DIR_BASE}/*.h ${DIR_BASE}/*.hpp)
source_group("source\\base" FILES ${SRC_BASE_CPP})
source_group("header\\base" FILES ${SRC_BASE_HPP})
list (APPEND CPP_FULL ${SRC_BASE_CPP})
list (APPEND HPP_FULL ${SRC_BASE_HPP})

# source : procloop
file(GLOB_RECURSE SRC_PROCLOOP_CPP ${DIR_PROCLOOP}/*.cpp)
file(GLOB_RECURSE SRC_PROCLOOP_HPP ${DIR_PROCLOOP}/*.h ${DIR_PROCLOOP}/*.hpp)
source_group("source\\procloop" FILES ${SRC_PROCLOOP_CPP})
source_group("header\\procloop" FILES ${SRC_PROCLOOP_HPP})
list (APPEND CPP_FULL ${SRC_PROCLOOP_CPP})
list (APPEND HPP_FULL ${SRC_PROCLOOP_HPP})

# include the files
add_library(FT_PLATFORM_LIB ${CPP_FULL} ${HPP_FULL})
set_target_properties(FT_PLATFORM_LIB PROPERTIES OUTPUT_NAME ft_platform_lib)

# define default include path
target_include_directories(FT_PLATFORM_LIB PRIVATE "${DIR_SRC}")
