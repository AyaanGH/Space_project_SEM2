# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles\progress.marks"
	$(MAKE) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\Ayaan\Documents\Computer_Science\Year 1\Semester 2\Space Game\CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/build
.PHONY : main/fast

#=============================================================================
# Target rules for targets named npc

# Build rule for target.
npc: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 npc
.PHONY : npc

# fast build rule for target.
npc/fast:
	$(MAKE) -f CMakeFiles\npc.dir\build.make CMakeFiles/npc.dir/build
.PHONY : npc/fast

#=============================================================================
# Target rules for targets named player

# Build rule for target.
player: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 player
.PHONY : player

# fast build rule for target.
player/fast:
	$(MAKE) -f CMakeFiles\player.dir\build.make CMakeFiles/player.dir/build
.PHONY : player/fast

#=============================================================================
# Target rules for targets named menu

# Build rule for target.
menu: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 menu
.PHONY : menu

# fast build rule for target.
menu/fast:
	$(MAKE) -f CMakeFiles\menu.dir\build.make CMakeFiles/menu.dir/build
.PHONY : menu/fast

#=============================================================================
# Target rules for targets named room

# Build rule for target.
room: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 room
.PHONY : room

# fast build rule for target.
room/fast:
	$(MAKE) -f CMakeFiles\room.dir\build.make CMakeFiles/room.dir/build
.PHONY : room/fast

#=============================================================================
# Target rules for targets named conv

# Build rule for target.
conv: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 conv
.PHONY : conv

# fast build rule for target.
conv/fast:
	$(MAKE) -f CMakeFiles\conv.dir\build.make CMakeFiles/conv.dir/build
.PHONY : conv/fast

#=============================================================================
# Target rules for targets named item

# Build rule for target.
item: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 item
.PHONY : item

# fast build rule for target.
item/fast:
	$(MAKE) -f CMakeFiles\item.dir\build.make CMakeFiles/item.dir/build
.PHONY : item/fast

src/conv.obj: src/conv.cpp.obj

.PHONY : src/conv.obj

# target to build an object file
src/conv.cpp.obj:
	$(MAKE) -f CMakeFiles\conv.dir\build.make CMakeFiles/conv.dir/src/conv.cpp.obj
.PHONY : src/conv.cpp.obj

src/conv.i: src/conv.cpp.i

.PHONY : src/conv.i

# target to preprocess a source file
src/conv.cpp.i:
	$(MAKE) -f CMakeFiles\conv.dir\build.make CMakeFiles/conv.dir/src/conv.cpp.i
.PHONY : src/conv.cpp.i

src/conv.s: src/conv.cpp.s

.PHONY : src/conv.s

# target to generate assembly for a file
src/conv.cpp.s:
	$(MAKE) -f CMakeFiles\conv.dir\build.make CMakeFiles/conv.dir/src/conv.cpp.s
.PHONY : src/conv.cpp.s

src/item.obj: src/item.cpp.obj

.PHONY : src/item.obj

# target to build an object file
src/item.cpp.obj:
	$(MAKE) -f CMakeFiles\item.dir\build.make CMakeFiles/item.dir/src/item.cpp.obj
.PHONY : src/item.cpp.obj

src/item.i: src/item.cpp.i

.PHONY : src/item.i

# target to preprocess a source file
src/item.cpp.i:
	$(MAKE) -f CMakeFiles\item.dir\build.make CMakeFiles/item.dir/src/item.cpp.i
.PHONY : src/item.cpp.i

src/item.s: src/item.cpp.s

.PHONY : src/item.s

# target to generate assembly for a file
src/item.cpp.s:
	$(MAKE) -f CMakeFiles\item.dir\build.make CMakeFiles/item.dir/src/item.cpp.s
.PHONY : src/item.cpp.s

src/main.obj: src/main.cpp.obj

.PHONY : src/main.obj

# target to build an object file
src/main.cpp.obj:
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/src/main.cpp.obj
.PHONY : src/main.cpp.obj

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/menu.obj: src/menu.cpp.obj

.PHONY : src/menu.obj

# target to build an object file
src/menu.cpp.obj:
	$(MAKE) -f CMakeFiles\menu.dir\build.make CMakeFiles/menu.dir/src/menu.cpp.obj
.PHONY : src/menu.cpp.obj

src/menu.i: src/menu.cpp.i

.PHONY : src/menu.i

# target to preprocess a source file
src/menu.cpp.i:
	$(MAKE) -f CMakeFiles\menu.dir\build.make CMakeFiles/menu.dir/src/menu.cpp.i
.PHONY : src/menu.cpp.i

src/menu.s: src/menu.cpp.s

.PHONY : src/menu.s

# target to generate assembly for a file
src/menu.cpp.s:
	$(MAKE) -f CMakeFiles\menu.dir\build.make CMakeFiles/menu.dir/src/menu.cpp.s
.PHONY : src/menu.cpp.s

src/npc.obj: src/npc.cpp.obj

.PHONY : src/npc.obj

# target to build an object file
src/npc.cpp.obj:
	$(MAKE) -f CMakeFiles\npc.dir\build.make CMakeFiles/npc.dir/src/npc.cpp.obj
.PHONY : src/npc.cpp.obj

src/npc.i: src/npc.cpp.i

.PHONY : src/npc.i

# target to preprocess a source file
src/npc.cpp.i:
	$(MAKE) -f CMakeFiles\npc.dir\build.make CMakeFiles/npc.dir/src/npc.cpp.i
.PHONY : src/npc.cpp.i

src/npc.s: src/npc.cpp.s

.PHONY : src/npc.s

# target to generate assembly for a file
src/npc.cpp.s:
	$(MAKE) -f CMakeFiles\npc.dir\build.make CMakeFiles/npc.dir/src/npc.cpp.s
.PHONY : src/npc.cpp.s

src/player.obj: src/player.cpp.obj

.PHONY : src/player.obj

# target to build an object file
src/player.cpp.obj:
	$(MAKE) -f CMakeFiles\player.dir\build.make CMakeFiles/player.dir/src/player.cpp.obj
.PHONY : src/player.cpp.obj

src/player.i: src/player.cpp.i

.PHONY : src/player.i

# target to preprocess a source file
src/player.cpp.i:
	$(MAKE) -f CMakeFiles\player.dir\build.make CMakeFiles/player.dir/src/player.cpp.i
.PHONY : src/player.cpp.i

src/player.s: src/player.cpp.s

.PHONY : src/player.s

# target to generate assembly for a file
src/player.cpp.s:
	$(MAKE) -f CMakeFiles\player.dir\build.make CMakeFiles/player.dir/src/player.cpp.s
.PHONY : src/player.cpp.s

src/room.obj: src/room.cpp.obj

.PHONY : src/room.obj

# target to build an object file
src/room.cpp.obj:
	$(MAKE) -f CMakeFiles\room.dir\build.make CMakeFiles/room.dir/src/room.cpp.obj
.PHONY : src/room.cpp.obj

src/room.i: src/room.cpp.i

.PHONY : src/room.i

# target to preprocess a source file
src/room.cpp.i:
	$(MAKE) -f CMakeFiles\room.dir\build.make CMakeFiles/room.dir/src/room.cpp.i
.PHONY : src/room.cpp.i

src/room.s: src/room.cpp.s

.PHONY : src/room.s

# target to generate assembly for a file
src/room.cpp.s:
	$(MAKE) -f CMakeFiles\room.dir\build.make CMakeFiles/room.dir/src/room.cpp.s
.PHONY : src/room.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... main
	@echo ... edit_cache
	@echo ... npc
	@echo ... player
	@echo ... menu
	@echo ... room
	@echo ... conv
	@echo ... item
	@echo ... rebuild_cache
	@echo ... src/conv.obj
	@echo ... src/conv.i
	@echo ... src/conv.s
	@echo ... src/item.obj
	@echo ... src/item.i
	@echo ... src/item.s
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
	@echo ... src/menu.obj
	@echo ... src/menu.i
	@echo ... src/menu.s
	@echo ... src/npc.obj
	@echo ... src/npc.i
	@echo ... src/npc.s
	@echo ... src/player.obj
	@echo ... src/player.i
	@echo ... src/player.s
	@echo ... src/room.obj
	@echo ... src/room.i
	@echo ... src/room.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

