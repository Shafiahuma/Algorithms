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
CMAKE_SOURCE_DIR = "/cygdrive/d/Users/snhum/number_theory/spoj-just add it"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/spoj_just_add_it.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spoj_just_add_it.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spoj_just_add_it.dir/flags.make

CMakeFiles/spoj_just_add_it.dir/main.cpp.o: CMakeFiles/spoj_just_add_it.dir/flags.make
CMakeFiles/spoj_just_add_it.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spoj_just_add_it.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spoj_just_add_it.dir/main.cpp.o -c "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/main.cpp"

CMakeFiles/spoj_just_add_it.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spoj_just_add_it.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/main.cpp" > CMakeFiles/spoj_just_add_it.dir/main.cpp.i

CMakeFiles/spoj_just_add_it.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spoj_just_add_it.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/main.cpp" -o CMakeFiles/spoj_just_add_it.dir/main.cpp.s

# Object files for target spoj_just_add_it
spoj_just_add_it_OBJECTS = \
"CMakeFiles/spoj_just_add_it.dir/main.cpp.o"

# External object files for target spoj_just_add_it
spoj_just_add_it_EXTERNAL_OBJECTS =

spoj_just_add_it.exe: CMakeFiles/spoj_just_add_it.dir/main.cpp.o
spoj_just_add_it.exe: CMakeFiles/spoj_just_add_it.dir/build.make
spoj_just_add_it.exe: CMakeFiles/spoj_just_add_it.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spoj_just_add_it.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spoj_just_add_it.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spoj_just_add_it.dir/build: spoj_just_add_it.exe

.PHONY : CMakeFiles/spoj_just_add_it.dir/build

CMakeFiles/spoj_just_add_it.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spoj_just_add_it.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spoj_just_add_it.dir/clean

CMakeFiles/spoj_just_add_it.dir/depend:
	cd "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/Users/snhum/number_theory/spoj-just add it" "/cygdrive/d/Users/snhum/number_theory/spoj-just add it" "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug" "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug" "/cygdrive/d/Users/snhum/number_theory/spoj-just add it/cmake-build-debug/CMakeFiles/spoj_just_add_it.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/spoj_just_add_it.dir/depend

