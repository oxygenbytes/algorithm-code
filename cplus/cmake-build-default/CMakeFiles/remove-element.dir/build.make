# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/zxq/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5712.21/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/zxq/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5712.21/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zxq/.leetcode/cplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zxq/.leetcode/cplus/cmake-build-default

# Include any dependencies generated for this target.
include CMakeFiles/remove-element.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/remove-element.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/remove-element.dir/flags.make

CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o: CMakeFiles/remove-element.dir/flags.make
CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o: ../leetcode/editor/cn/remove-element.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o -c /home/zxq/.leetcode/cplus/leetcode/editor/cn/remove-element.cpp

CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zxq/.leetcode/cplus/leetcode/editor/cn/remove-element.cpp > CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.i

CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zxq/.leetcode/cplus/leetcode/editor/cn/remove-element.cpp -o CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.s

# Object files for target remove-element
remove__element_OBJECTS = \
"CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o"

# External object files for target remove-element
remove__element_EXTERNAL_OBJECTS =

remove-element: CMakeFiles/remove-element.dir/leetcode/editor/cn/remove-element.cpp.o
remove-element: CMakeFiles/remove-element.dir/build.make
remove-element: CMakeFiles/remove-element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable remove-element"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/remove-element.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/remove-element.dir/build: remove-element
.PHONY : CMakeFiles/remove-element.dir/build

CMakeFiles/remove-element.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/remove-element.dir/cmake_clean.cmake
.PHONY : CMakeFiles/remove-element.dir/clean

CMakeFiles/remove-element.dir/depend:
	cd /home/zxq/.leetcode/cplus/cmake-build-default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxq/.leetcode/cplus /home/zxq/.leetcode/cplus /home/zxq/.leetcode/cplus/cmake-build-default /home/zxq/.leetcode/cplus/cmake-build-default /home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles/remove-element.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/remove-element.dir/depend

