# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = E:\CMake\bin\cmake.exe

# The command to remove a file.
RM = E:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build"

# Include any dependencies generated for this target.
include CMakeFiles/manydice.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/manydice.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/manydice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/manydice.dir/flags.make

CMakeFiles/manydice.dir/src/diceroll.c.obj: CMakeFiles/manydice.dir/flags.make
CMakeFiles/manydice.dir/src/diceroll.c.obj: CMakeFiles/manydice.dir/includes_C.rsp
CMakeFiles/manydice.dir/src/diceroll.c.obj: C:/Users/Hao\ Guoqing/Desktop/VS_PJ/CPPch12/diceroll/src/diceroll.c
CMakeFiles/manydice.dir/src/diceroll.c.obj: CMakeFiles/manydice.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/manydice.dir/src/diceroll.c.obj"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/manydice.dir/src/diceroll.c.obj -MF CMakeFiles\manydice.dir\src\diceroll.c.obj.d -o CMakeFiles\manydice.dir\src\diceroll.c.obj -c "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\src\diceroll.c"

CMakeFiles/manydice.dir/src/diceroll.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/manydice.dir/src/diceroll.c.i"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\src\diceroll.c" > CMakeFiles\manydice.dir\src\diceroll.c.i

CMakeFiles/manydice.dir/src/diceroll.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/manydice.dir/src/diceroll.c.s"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\src\diceroll.c" -o CMakeFiles\manydice.dir\src\diceroll.c.s

CMakeFiles/manydice.dir/manydice.c.obj: CMakeFiles/manydice.dir/flags.make
CMakeFiles/manydice.dir/manydice.c.obj: CMakeFiles/manydice.dir/includes_C.rsp
CMakeFiles/manydice.dir/manydice.c.obj: C:/Users/Hao\ Guoqing/Desktop/VS_PJ/CPPch12/diceroll/manydice.c
CMakeFiles/manydice.dir/manydice.c.obj: CMakeFiles/manydice.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/manydice.dir/manydice.c.obj"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/manydice.dir/manydice.c.obj -MF CMakeFiles\manydice.dir\manydice.c.obj.d -o CMakeFiles\manydice.dir\manydice.c.obj -c "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\manydice.c"

CMakeFiles/manydice.dir/manydice.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/manydice.dir/manydice.c.i"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\manydice.c" > CMakeFiles\manydice.dir\manydice.c.i

CMakeFiles/manydice.dir/manydice.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/manydice.dir/manydice.c.s"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\manydice.c" -o CMakeFiles\manydice.dir\manydice.c.s

# Object files for target manydice
manydice_OBJECTS = \
"CMakeFiles/manydice.dir/src/diceroll.c.obj" \
"CMakeFiles/manydice.dir/manydice.c.obj"

# External object files for target manydice
manydice_EXTERNAL_OBJECTS =

manydice.exe: CMakeFiles/manydice.dir/src/diceroll.c.obj
manydice.exe: CMakeFiles/manydice.dir/manydice.c.obj
manydice.exe: CMakeFiles/manydice.dir/build.make
manydice.exe: CMakeFiles/manydice.dir/linkLibs.rsp
manydice.exe: CMakeFiles/manydice.dir/objects1.rsp
manydice.exe: CMakeFiles/manydice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable manydice.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\manydice.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/manydice.dir/build: manydice.exe
.PHONY : CMakeFiles/manydice.dir/build

CMakeFiles/manydice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\manydice.dir\cmake_clean.cmake
.PHONY : CMakeFiles/manydice.dir/clean

CMakeFiles/manydice.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch12\diceroll\build\CMakeFiles\manydice.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/manydice.dir/depend

