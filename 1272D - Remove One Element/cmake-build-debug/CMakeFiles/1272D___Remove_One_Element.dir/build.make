# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Repos\Projects\1272D - Remove One Element"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1272D___Remove_One_Element.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1272D___Remove_One_Element.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1272D___Remove_One_Element.dir/flags.make

CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.obj: CMakeFiles/1272D___Remove_One_Element.dir/flags.make
CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1272D___Remove_One_Element.dir\main.cpp.obj -c "D:\Repos\Projects\1272D - Remove One Element\main.cpp"

CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Repos\Projects\1272D - Remove One Element\main.cpp" > CMakeFiles\1272D___Remove_One_Element.dir\main.cpp.i

CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Repos\Projects\1272D - Remove One Element\main.cpp" -o CMakeFiles\1272D___Remove_One_Element.dir\main.cpp.s

# Object files for target 1272D___Remove_One_Element
1272D___Remove_One_Element_OBJECTS = \
"CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.obj"

# External object files for target 1272D___Remove_One_Element
1272D___Remove_One_Element_EXTERNAL_OBJECTS =

1272D___Remove_One_Element.exe: CMakeFiles/1272D___Remove_One_Element.dir/main.cpp.obj
1272D___Remove_One_Element.exe: CMakeFiles/1272D___Remove_One_Element.dir/build.make
1272D___Remove_One_Element.exe: CMakeFiles/1272D___Remove_One_Element.dir/linklibs.rsp
1272D___Remove_One_Element.exe: CMakeFiles/1272D___Remove_One_Element.dir/objects1.rsp
1272D___Remove_One_Element.exe: CMakeFiles/1272D___Remove_One_Element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1272D___Remove_One_Element.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1272D___Remove_One_Element.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1272D___Remove_One_Element.dir/build: 1272D___Remove_One_Element.exe

.PHONY : CMakeFiles/1272D___Remove_One_Element.dir/build

CMakeFiles/1272D___Remove_One_Element.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1272D___Remove_One_Element.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1272D___Remove_One_Element.dir/clean

CMakeFiles/1272D___Remove_One_Element.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Repos\Projects\1272D - Remove One Element" "D:\Repos\Projects\1272D - Remove One Element" "D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug" "D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug" "D:\Repos\Projects\1272D - Remove One Element\cmake-build-debug\CMakeFiles\1272D___Remove_One_Element.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1272D___Remove_One_Element.dir/depend

