# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/linux/enpm702_fall2024/rwa1_Kharat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/linux/enpm702_fall2024/rwa1_Kharat/build/out/Release

# Utility rule file for run_valgrind.

# Include the progress variables for this target.
include CMakeFiles/run_valgrind.dir/progress.make

CMakeFiles/run_valgrind: exercise1
	valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./exercise1

run_valgrind: CMakeFiles/run_valgrind
run_valgrind: CMakeFiles/run_valgrind.dir/build.make

.PHONY : run_valgrind

# Rule to build all files generated by this target.
CMakeFiles/run_valgrind.dir/build: run_valgrind

.PHONY : CMakeFiles/run_valgrind.dir/build

CMakeFiles/run_valgrind.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_valgrind.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_valgrind.dir/clean

CMakeFiles/run_valgrind.dir/depend:
	cd /home/linux/enpm702_fall2024/rwa1_Kharat/build/out/Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/linux/enpm702_fall2024/rwa1_Kharat /home/linux/enpm702_fall2024/rwa1_Kharat /home/linux/enpm702_fall2024/rwa1_Kharat/build/out/Release /home/linux/enpm702_fall2024/rwa1_Kharat/build/out/Release /home/linux/enpm702_fall2024/rwa1_Kharat/build/out/Release/CMakeFiles/run_valgrind.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run_valgrind.dir/depend

