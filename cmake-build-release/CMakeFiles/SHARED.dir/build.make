# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\clion\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\jhc\numeric_analyze

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\jhc\numeric_analyze\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles\SHARED.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\SHARED.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SHARED.dir\flags.make

CMakeFiles\SHARED.dir\fsolve.c.obj: CMakeFiles\SHARED.dir\flags.make
CMakeFiles\SHARED.dir\fsolve.c.obj: ..\fsolve.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\jhc\numeric_analyze\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SHARED.dir/fsolve.c.obj"
	F:\vs2017\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\SHARED.dir\fsolve.c.obj /FdCMakeFiles\SHARED.dir\SHARED.pdb /FS -c F:\jhc\numeric_analyze\fsolve.c
<<

CMakeFiles\SHARED.dir\fsolve.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SHARED.dir/fsolve.c.i"
	F:\vs2017\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe > CMakeFiles\SHARED.dir\fsolve.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\jhc\numeric_analyze\fsolve.c
<<

CMakeFiles\SHARED.dir\fsolve.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SHARED.dir/fsolve.c.s"
	F:\vs2017\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\SHARED.dir\fsolve.c.s /c F:\jhc\numeric_analyze\fsolve.c
<<

# Object files for target SHARED
SHARED_OBJECTS = \
"CMakeFiles\SHARED.dir\fsolve.c.obj"

# External object files for target SHARED
SHARED_EXTERNAL_OBJECTS =

SHARED.lib: CMakeFiles\SHARED.dir\fsolve.c.obj
SHARED.lib: CMakeFiles\SHARED.dir\build.make
SHARED.lib: CMakeFiles\SHARED.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\jhc\numeric_analyze\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library SHARED.lib"
	$(CMAKE_COMMAND) -P CMakeFiles\SHARED.dir\cmake_clean_target.cmake
	F:\vs2017\VC\Tools\MSVC\14.16.27023\bin\Hostx64\x64\link.exe /lib /nologo /machine:x64 /out:SHARED.lib @CMakeFiles\SHARED.dir\objects1.rsp 

# Rule to build all files generated by this target.
CMakeFiles\SHARED.dir\build: SHARED.lib

.PHONY : CMakeFiles\SHARED.dir\build

CMakeFiles\SHARED.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SHARED.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SHARED.dir\clean

CMakeFiles\SHARED.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\jhc\numeric_analyze F:\jhc\numeric_analyze F:\jhc\numeric_analyze\cmake-build-release F:\jhc\numeric_analyze\cmake-build-release F:\jhc\numeric_analyze\cmake-build-release\CMakeFiles\SHARED.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\SHARED.dir\depend

