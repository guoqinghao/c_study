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
CMAKE_SOURCE_DIR = "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build"

# Include any dependencies generated for this target.
include CMakeFiles/useheader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/useheader.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/useheader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/useheader.dir/flags.make

CMakeFiles/useheader.dir/src/name_st.c.obj: CMakeFiles/useheader.dir/flags.make
CMakeFiles/useheader.dir/src/name_st.c.obj: CMakeFiles/useheader.dir/includes_C.rsp
CMakeFiles/useheader.dir/src/name_st.c.obj: C:/Users/Hao\ Guoqing/Desktop/VS_PJ/CPPch16/useheader/src/name_st.c
CMakeFiles/useheader.dir/src/name_st.c.obj: CMakeFiles/useheader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/useheader.dir/src/name_st.c.obj"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/useheader.dir/src/name_st.c.obj -MF CMakeFiles\useheader.dir\src\name_st.c.obj.d -o CMakeFiles\useheader.dir\src\name_st.c.obj -c "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\src\name_st.c"

CMakeFiles/useheader.dir/src/name_st.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/useheader.dir/src/name_st.c.i"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\src\name_st.c" > CMakeFiles\useheader.dir\src\name_st.c.i

CMakeFiles/useheader.dir/src/name_st.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/useheader.dir/src/name_st.c.s"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\src\name_st.c" -o CMakeFiles\useheader.dir\src\name_st.c.s

CMakeFiles/useheader.dir/useheader.c.obj: CMakeFiles/useheader.dir/flags.make
CMakeFiles/useheader.dir/useheader.c.obj: CMakeFiles/useheader.dir/includes_C.rsp
CMakeFiles/useheader.dir/useheader.c.obj: C:/Users/Hao\ Guoqing/Desktop/VS_PJ/CPPch16/useheader/useheader.c
CMakeFiles/useheader.dir/useheader.c.obj: CMakeFiles/useheader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/useheader.dir/useheader.c.obj"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/useheader.dir/useheader.c.obj -MF CMakeFiles\useheader.dir\useheader.c.obj.d -o CMakeFiles\useheader.dir\useheader.c.obj -c "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\useheader.c"

CMakeFiles/useheader.dir/useheader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/useheader.dir/useheader.c.i"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\useheader.c" > CMakeFiles\useheader.dir\useheader.c.i

CMakeFiles/useheader.dir/useheader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/useheader.dir/useheader.c.s"
	E:\MSYS2\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\useheader.c" -o CMakeFiles\useheader.dir\useheader.c.s

# Object files for target useheader
useheader_OBJECTS = \
"CMakeFiles/useheader.dir/src/name_st.c.obj" \
"CMakeFiles/useheader.dir/useheader.c.obj"

# External object files for target useheader
useheader_EXTERNAL_OBJECTS =

useheader.exe: CMakeFiles/useheader.dir/src/name_st.c.obj
useheader.exe: CMakeFiles/useheader.dir/useheader.c.obj
useheader.exe: CMakeFiles/useheader.dir/build.make
useheader.exe: CMakeFiles/useheader.dir/linkLibs.rsp
useheader.exe: CMakeFiles/useheader.dir/objects1.rsp
useheader.exe: CMakeFiles/useheader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable useheader.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\useheader.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/useheader.dir/build: useheader.exe
.PHONY : CMakeFiles/useheader.dir/build

CMakeFiles/useheader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\useheader.dir\cmake_clean.cmake
.PHONY : CMakeFiles/useheader.dir/clean

CMakeFiles/useheader.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build" "C:\Users\Hao Guoqing\Desktop\VS_PJ\CPPch16\useheader\build\CMakeFiles\useheader.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/useheader.dir/depend

