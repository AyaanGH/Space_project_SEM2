# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game"

# Include any dependencies generated for this target.
include CMakeFiles/npc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/npc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/npc.dir/flags.make

CMakeFiles/npc.dir/src/npc.cpp.obj: CMakeFiles/npc.dir/flags.make
CMakeFiles/npc.dir/src/npc.cpp.obj: CMakeFiles/npc.dir/includes_CXX.rsp
CMakeFiles/npc.dir/src/npc.cpp.obj: src/npc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/npc.dir/src/npc.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\npc.dir\src\npc.cpp.obj -c "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\npc.cpp"

CMakeFiles/npc.dir/src/npc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/npc.dir/src/npc.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\npc.cpp" > CMakeFiles\npc.dir\src\npc.cpp.i

CMakeFiles/npc.dir/src/npc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/npc.dir/src/npc.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\npc.cpp" -o CMakeFiles\npc.dir\src\npc.cpp.s

# Object files for target npc
npc_OBJECTS = \
"CMakeFiles/npc.dir/src/npc.cpp.obj"

# External object files for target npc
npc_EXTERNAL_OBJECTS =

builds/lib/libnpc.a: CMakeFiles/npc.dir/src/npc.cpp.obj
builds/lib/libnpc.a: CMakeFiles/npc.dir/build.make
builds/lib/libnpc.a: CMakeFiles/npc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library builds\lib\libnpc.a"
	$(CMAKE_COMMAND) -P CMakeFiles\npc.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\npc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/npc.dir/build: builds/lib/libnpc.a

.PHONY : CMakeFiles/npc.dir/build

CMakeFiles/npc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\npc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/npc.dir/clean

CMakeFiles/npc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles\npc.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/npc.dir/depend
