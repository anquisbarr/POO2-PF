# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/diego/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/diego/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/192.6603.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diego/CLionProjects/ProyectoFinal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diego/CLionProjects/ProyectoFinal/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProyectoFinal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProyectoFinal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProyectoFinal.dir/flags.make

CMakeFiles/ProyectoFinal.dir/main.cpp.o: CMakeFiles/ProyectoFinal.dir/flags.make
CMakeFiles/ProyectoFinal.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diego/CLionProjects/ProyectoFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProyectoFinal.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ProyectoFinal.dir/main.cpp.o -c /home/diego/CLionProjects/ProyectoFinal/main.cpp

CMakeFiles/ProyectoFinal.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProyectoFinal.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diego/CLionProjects/ProyectoFinal/main.cpp > CMakeFiles/ProyectoFinal.dir/main.cpp.i

CMakeFiles/ProyectoFinal.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProyectoFinal.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diego/CLionProjects/ProyectoFinal/main.cpp -o CMakeFiles/ProyectoFinal.dir/main.cpp.s

# Object files for target ProyectoFinal
ProyectoFinal_OBJECTS = \
"CMakeFiles/ProyectoFinal.dir/main.cpp.o"

# External object files for target ProyectoFinal
ProyectoFinal_EXTERNAL_OBJECTS =

ProyectoFinal: CMakeFiles/ProyectoFinal.dir/main.cpp.o
ProyectoFinal: CMakeFiles/ProyectoFinal.dir/build.make
ProyectoFinal: CMakeFiles/ProyectoFinal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diego/CLionProjects/ProyectoFinal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProyectoFinal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProyectoFinal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProyectoFinal.dir/build: ProyectoFinal

.PHONY : CMakeFiles/ProyectoFinal.dir/build

CMakeFiles/ProyectoFinal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProyectoFinal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProyectoFinal.dir/clean

CMakeFiles/ProyectoFinal.dir/depend:
	cd /home/diego/CLionProjects/ProyectoFinal/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diego/CLionProjects/ProyectoFinal /home/diego/CLionProjects/ProyectoFinal /home/diego/CLionProjects/ProyectoFinal/cmake-build-debug /home/diego/CLionProjects/ProyectoFinal/cmake-build-debug /home/diego/CLionProjects/ProyectoFinal/cmake-build-debug/CMakeFiles/ProyectoFinal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProyectoFinal.dir/depend

