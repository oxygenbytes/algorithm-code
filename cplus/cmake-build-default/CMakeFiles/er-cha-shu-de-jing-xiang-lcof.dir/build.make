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
include CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/flags.make

CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o: CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/flags.make
CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o: ../leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o -c /home/zxq/.leetcode/cplus/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp

CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zxq/.leetcode/cplus/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp > CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.i

CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zxq/.leetcode/cplus/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp -o CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.s

# Object files for target er-cha-shu-de-jing-xiang-lcof
er__cha__shu__de__jing__xiang__lcof_OBJECTS = \
"CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o"

# External object files for target er-cha-shu-de-jing-xiang-lcof
er__cha__shu__de__jing__xiang__lcof_EXTERNAL_OBJECTS =

er-cha-shu-de-jing-xiang-lcof: CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/leetcode/editor/cn/er-cha-shu-de-jing-xiang-lcof.cpp.o
er-cha-shu-de-jing-xiang-lcof: CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/build.make
er-cha-shu-de-jing-xiang-lcof: CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable er-cha-shu-de-jing-xiang-lcof"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/build: er-cha-shu-de-jing-xiang-lcof
.PHONY : CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/build

CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/cmake_clean.cmake
.PHONY : CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/clean

CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/depend:
	cd /home/zxq/.leetcode/cplus/cmake-build-default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zxq/.leetcode/cplus /home/zxq/.leetcode/cplus /home/zxq/.leetcode/cplus/cmake-build-default /home/zxq/.leetcode/cplus/cmake-build-default /home/zxq/.leetcode/cplus/cmake-build-default/CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/er-cha-shu-de-jing-xiang-lcof.dir/depend

