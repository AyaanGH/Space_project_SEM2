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
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.obj: CMakeFiles/main.dir/includes_CXX.rsp
CMakeFiles/main.dir/src/main.cpp.obj: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\main.dir\src\main.cpp.obj -c "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\main.cpp"

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\main.cpp" > CMakeFiles\main.dir\src\main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\main.cpp" -o CMakeFiles\main.dir\src\main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

bin/main.exe: CMakeFiles/main.dir/src/main.cpp.obj
bin/main.exe: CMakeFiles/main.dir/build.make
bin/main.exe: builds/lib/libplayer.a
bin/main.exe: builds/lib/libmenu.a
bin/main.exe: CMakeFiles/main.dir/linklibs.rsp
bin/main.exe: CMakeFiles/main.dir/objects1.rsp
bin/main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin\main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: bin/main.exe

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles\main.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

