# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = C:\Users\Tim\Documents\Informatik\ipk_exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Tim\Documents\Informatik\ipk_exercises\build

# Include any dependencies generated for this target.
include CMakeFiles/Lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lib.dir/flags.make

CMakeFiles/Lib.dir/pgm.cc.obj: CMakeFiles/Lib.dir/flags.make
CMakeFiles/Lib.dir/pgm.cc.obj: ../pgm.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Tim\Documents\Informatik\ipk_exercises\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lib.dir/pgm.cc.obj"
	C:\PROGRA~1\TDM-GCC\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lib.dir\pgm.cc.obj -c C:\Users\Tim\Documents\Informatik\ipk_exercises\pgm.cc

CMakeFiles/Lib.dir/pgm.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lib.dir/pgm.cc.i"
	C:\PROGRA~1\TDM-GCC\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Tim\Documents\Informatik\ipk_exercises\pgm.cc > CMakeFiles\Lib.dir\pgm.cc.i

CMakeFiles/Lib.dir/pgm.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lib.dir/pgm.cc.s"
	C:\PROGRA~1\TDM-GCC\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Tim\Documents\Informatik\ipk_exercises\pgm.cc -o CMakeFiles\Lib.dir\pgm.cc.s

CMakeFiles/Lib.dir/pgm.cc.obj.requires:

.PHONY : CMakeFiles/Lib.dir/pgm.cc.obj.requires

CMakeFiles/Lib.dir/pgm.cc.obj.provides: CMakeFiles/Lib.dir/pgm.cc.obj.requires
	$(MAKE) -f CMakeFiles\Lib.dir\build.make CMakeFiles/Lib.dir/pgm.cc.obj.provides.build
.PHONY : CMakeFiles/Lib.dir/pgm.cc.obj.provides

CMakeFiles/Lib.dir/pgm.cc.obj.provides.build: CMakeFiles/Lib.dir/pgm.cc.obj


# Object files for target Lib
Lib_OBJECTS = \
"CMakeFiles/Lib.dir/pgm.cc.obj"

# External object files for target Lib
Lib_EXTERNAL_OBJECTS =

libLib.a: CMakeFiles/Lib.dir/pgm.cc.obj
libLib.a: CMakeFiles/Lib.dir/build.make
libLib.a: CMakeFiles/Lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Tim\Documents\Informatik\ipk_exercises\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLib.a"
	$(CMAKE_COMMAND) -P CMakeFiles\Lib.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lib.dir/build: libLib.a

.PHONY : CMakeFiles/Lib.dir/build

CMakeFiles/Lib.dir/requires: CMakeFiles/Lib.dir/pgm.cc.obj.requires

.PHONY : CMakeFiles/Lib.dir/requires

CMakeFiles/Lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lib.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lib.dir/clean

CMakeFiles/Lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Tim\Documents\Informatik\ipk_exercises C:\Users\Tim\Documents\Informatik\ipk_exercises C:\Users\Tim\Documents\Informatik\ipk_exercises\build C:\Users\Tim\Documents\Informatik\ipk_exercises\build C:\Users\Tim\Documents\Informatik\ipk_exercises\build\CMakeFiles\Lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lib.dir/depend

