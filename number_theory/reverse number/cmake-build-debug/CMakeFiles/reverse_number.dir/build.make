# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/snhum/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/snhum/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/Users/snhum/number_theory/reverse number"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/reverse_number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverse_number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverse_number.dir/flags.make

CMakeFiles/reverse_number.dir/main.cpp.o: CMakeFiles/reverse_number.dir/flags.make
CMakeFiles/reverse_number.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse_number.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/reverse_number.dir/main.cpp.o -c "/cygdrive/d/Users/snhum/number_theory/reverse number/main.cpp"

CMakeFiles/reverse_number.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse_number.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Users/snhum/number_theory/reverse number/main.cpp" > CMakeFiles/reverse_number.dir/main.cpp.i

CMakeFiles/reverse_number.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse_number.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Users/snhum/number_theory/reverse number/main.cpp" -o CMakeFiles/reverse_number.dir/main.cpp.s

# Object files for target reverse_number
reverse_number_OBJECTS = \
"CMakeFiles/reverse_number.dir/main.cpp.o"

# External object files for target reverse_number
reverse_number_EXTERNAL_OBJECTS =

reverse_number.exe: CMakeFiles/reverse_number.dir/main.cpp.o
reverse_number.exe: CMakeFiles/reverse_number.dir/build.make
reverse_number.exe: CMakeFiles/reverse_number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverse_number.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/reverse_number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverse_number.dir/build: reverse_number.exe

.PHONY : CMakeFiles/reverse_number.dir/build

CMakeFiles/reverse_number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/reverse_number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/reverse_number.dir/clean

CMakeFiles/reverse_number.dir/depend:
	cd "/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Users/snhum/number_theory/reverse number" "/cygdrive/d/Users/snhum/number_theory/reverse number" "/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug" "/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug" "/cygdrive/d/Users/snhum/number_theory/reverse number/cmake-build-debug/CMakeFiles/reverse_number.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/reverse_number.dir/depend
