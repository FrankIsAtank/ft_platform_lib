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

# add a subfolder of source files
# and assign those files to their own filter/group
# name : group name (both source file directory name, and filter name)
macro(ft_add_group group_name)

	file(GLOB_RECURSE SRC_NEW_CPP "${DIR_SRC}/${group_name}/*.cpp")
	file(GLOB_RECURSE SRC_NEW_HPP "${DIR_SRC}/${group_name}/*.h" "${DIR_SRC}/${group_name}/*.hpp")
	source_group("source\\${group_name}" FILES ${SRC_NEW_CPP})
	source_group("header\\${group_name}" FILES ${SRC_NEW_HPP})
	list (APPEND CPP_FULL ${SRC_NEW_CPP})
	list (APPEND HPP_FULL ${SRC_NEW_HPP})

endmacro()

ft_add_group("base")
ft_add_group("procloop")

# include the files
add_library(FT_PLATFORM_LIB ${CPP_FULL} ${HPP_FULL})
set_target_properties(FT_PLATFORM_LIB PROPERTIES OUTPUT_NAME ft_platform_lib)

# define default include path
target_include_directories(FT_PLATFORM_LIB PRIVATE "${DIR_SRC}")
