# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /cygdrive/c/Users/Hayzb/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Hayzb/.CLion2016.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/That_s_My_Name_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/That_s_My_Name_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/That_s_My_Name_.dir/flags.make

CMakeFiles/That_s_My_Name_.dir/main.cpp.o: CMakeFiles/That_s_My_Name_.dir/flags.make
CMakeFiles/That_s_My_Name_.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/That_s_My_Name_.dir/main.cpp.o"
	/usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/That_s_My_Name_.dir/main.cpp.o -c "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/main.cpp"

CMakeFiles/That_s_My_Name_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/That_s_My_Name_.dir/main.cpp.i"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/main.cpp" > CMakeFiles/That_s_My_Name_.dir/main.cpp.i

CMakeFiles/That_s_My_Name_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/That_s_My_Name_.dir/main.cpp.s"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/main.cpp" -o CMakeFiles/That_s_My_Name_.dir/main.cpp.s

CMakeFiles/That_s_My_Name_.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/That_s_My_Name_.dir/main.cpp.o.requires

CMakeFiles/That_s_My_Name_.dir/main.cpp.o.provides: CMakeFiles/That_s_My_Name_.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/That_s_My_Name_.dir/build.make CMakeFiles/That_s_My_Name_.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/That_s_My_Name_.dir/main.cpp.o.provides

CMakeFiles/That_s_My_Name_.dir/main.cpp.o.provides.build: CMakeFiles/That_s_My_Name_.dir/main.cpp.o


# Object files for target That_s_My_Name_
That_s_My_Name__OBJECTS = \
"CMakeFiles/That_s_My_Name_.dir/main.cpp.o"

# External object files for target That_s_My_Name_
That_s_My_Name__EXTERNAL_OBJECTS =

That_s_My_Name_.exe: CMakeFiles/That_s_My_Name_.dir/main.cpp.o
That_s_My_Name_.exe: CMakeFiles/That_s_My_Name_.dir/build.make
That_s_My_Name_.exe: CMakeFiles/That_s_My_Name_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable That_s_My_Name_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/That_s_My_Name_.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/That_s_My_Name_.dir/build: That_s_My_Name_.exe

.PHONY : CMakeFiles/That_s_My_Name_.dir/build

CMakeFiles/That_s_My_Name_.dir/requires: CMakeFiles/That_s_My_Name_.dir/main.cpp.o.requires

.PHONY : CMakeFiles/That_s_My_Name_.dir/requires

CMakeFiles/That_s_My_Name_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/That_s_My_Name_.dir/cmake_clean.cmake
.PHONY : CMakeFiles/That_s_My_Name_.dir/clean

CMakeFiles/That_s_My_Name_.dir/depend:
	cd "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!" "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!" "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug" "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug" "/cygdrive/c/Users/Hayzb/CLionProjects/That's My Name!/cmake-build-debug/CMakeFiles/That_s_My_Name_.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/That_s_My_Name_.dir/depend

