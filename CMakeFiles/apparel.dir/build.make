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
include CMakeFiles/apparel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/apparel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/apparel.dir/flags.make

CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj: CMakeFiles/apparel.dir/flags.make
CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj: CMakeFiles/apparel.dir/includes_CXX.rsp
CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj: src/item_class_src/apparel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\apparel.dir\src\item_class_src\apparel.cpp.obj -c "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\item_class_src\apparel.cpp"

CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\item_class_src\apparel.cpp" > CMakeFiles\apparel.dir\src\item_class_src\apparel.cpp.i

CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\src\item_class_src\apparel.cpp" -o CMakeFiles\apparel.dir\src\item_class_src\apparel.cpp.s

# Object files for target apparel
apparel_OBJECTS = \
"CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj"

# External object files for target apparel
apparel_EXTERNAL_OBJECTS =

builds/lib/libapparel.a: CMakeFiles/apparel.dir/src/item_class_src/apparel.cpp.obj
builds/lib/libapparel.a: CMakeFiles/apparel.dir/build.make
builds/lib/libapparel.a: CMakeFiles/apparel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library builds\lib\libapparel.a"
	$(CMAKE_COMMAND) -P CMakeFiles\apparel.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\apparel.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/apparel.dir/build: builds/lib/libapparel.a

.PHONY : CMakeFiles/apparel.dir/build

CMakeFiles/apparel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\apparel.dir\cmake_clean.cmake
.PHONY : CMakeFiles/apparel.dir/clean

CMakeFiles/apparel.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles\apparel.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/apparel.dir/depend

