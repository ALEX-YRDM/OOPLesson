# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\CLion\CLion-2021.2.3.win\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\CLion\CLion-2021.2.3.win\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Clion_practice\oop\homeworkChap10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Clion_practice\oop\homeworkChap10\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homeworkChap10.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/homeworkChap10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homeworkChap10.dir/flags.make

CMakeFiles/homeworkChap10.dir/main.cpp.obj: CMakeFiles/homeworkChap10.dir/flags.make
CMakeFiles/homeworkChap10.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Clion_practice\oop\homeworkChap10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homeworkChap10.dir/main.cpp.obj"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homeworkChap10.dir\main.cpp.obj -c F:\Clion_practice\oop\homeworkChap10\main.cpp

CMakeFiles/homeworkChap10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homeworkChap10.dir/main.cpp.i"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Clion_practice\oop\homeworkChap10\main.cpp > CMakeFiles\homeworkChap10.dir\main.cpp.i

CMakeFiles/homeworkChap10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homeworkChap10.dir/main.cpp.s"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Clion_practice\oop\homeworkChap10\main.cpp -o CMakeFiles\homeworkChap10.dir\main.cpp.s

CMakeFiles/homeworkChap10.dir/Date.cpp.obj: CMakeFiles/homeworkChap10.dir/flags.make
CMakeFiles/homeworkChap10.dir/Date.cpp.obj: ../Date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Clion_practice\oop\homeworkChap10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homeworkChap10.dir/Date.cpp.obj"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\homeworkChap10.dir\Date.cpp.obj -c F:\Clion_practice\oop\homeworkChap10\Date.cpp

CMakeFiles/homeworkChap10.dir/Date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homeworkChap10.dir/Date.cpp.i"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Clion_practice\oop\homeworkChap10\Date.cpp > CMakeFiles\homeworkChap10.dir\Date.cpp.i

CMakeFiles/homeworkChap10.dir/Date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homeworkChap10.dir/Date.cpp.s"
	F:\Mingw\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Clion_practice\oop\homeworkChap10\Date.cpp -o CMakeFiles\homeworkChap10.dir\Date.cpp.s

# Object files for target homeworkChap10
homeworkChap10_OBJECTS = \
"CMakeFiles/homeworkChap10.dir/main.cpp.obj" \
"CMakeFiles/homeworkChap10.dir/Date.cpp.obj"

# External object files for target homeworkChap10
homeworkChap10_EXTERNAL_OBJECTS =

homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/main.cpp.obj
homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/Date.cpp.obj
homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/build.make
homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/linklibs.rsp
homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/objects1.rsp
homeworkChap10.exe: CMakeFiles/homeworkChap10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Clion_practice\oop\homeworkChap10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homeworkChap10.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homeworkChap10.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homeworkChap10.dir/build: homeworkChap10.exe
.PHONY : CMakeFiles/homeworkChap10.dir/build

CMakeFiles/homeworkChap10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homeworkChap10.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homeworkChap10.dir/clean

CMakeFiles/homeworkChap10.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Clion_practice\oop\homeworkChap10 F:\Clion_practice\oop\homeworkChap10 F:\Clion_practice\oop\homeworkChap10\cmake-build-debug F:\Clion_practice\oop\homeworkChap10\cmake-build-debug F:\Clion_practice\oop\homeworkChap10\cmake-build-debug\CMakeFiles\homeworkChap10.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homeworkChap10.dir/depend

