# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhangenqi/Documents/project/GC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangenqi/Documents/project/GC/build

# Include any dependencies generated for this target.
include CMakeFiles/GCtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GCtest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GCtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GCtest.dir/flags.make

CMakeFiles/GCtest.dir/src/test.cpp.o: CMakeFiles/GCtest.dir/flags.make
CMakeFiles/GCtest.dir/src/test.cpp.o: /Users/zhangenqi/Documents/project/GC/src/test.cpp
CMakeFiles/GCtest.dir/src/test.cpp.o: CMakeFiles/GCtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/zhangenqi/Documents/project/GC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GCtest.dir/src/test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GCtest.dir/src/test.cpp.o -MF CMakeFiles/GCtest.dir/src/test.cpp.o.d -o CMakeFiles/GCtest.dir/src/test.cpp.o -c /Users/zhangenqi/Documents/project/GC/src/test.cpp

CMakeFiles/GCtest.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GCtest.dir/src/test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangenqi/Documents/project/GC/src/test.cpp > CMakeFiles/GCtest.dir/src/test.cpp.i

CMakeFiles/GCtest.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GCtest.dir/src/test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangenqi/Documents/project/GC/src/test.cpp -o CMakeFiles/GCtest.dir/src/test.cpp.s

CMakeFiles/GCtest.dir/src/VM.cpp.o: CMakeFiles/GCtest.dir/flags.make
CMakeFiles/GCtest.dir/src/VM.cpp.o: /Users/zhangenqi/Documents/project/GC/src/VM.cpp
CMakeFiles/GCtest.dir/src/VM.cpp.o: CMakeFiles/GCtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/zhangenqi/Documents/project/GC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/GCtest.dir/src/VM.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GCtest.dir/src/VM.cpp.o -MF CMakeFiles/GCtest.dir/src/VM.cpp.o.d -o CMakeFiles/GCtest.dir/src/VM.cpp.o -c /Users/zhangenqi/Documents/project/GC/src/VM.cpp

CMakeFiles/GCtest.dir/src/VM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GCtest.dir/src/VM.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangenqi/Documents/project/GC/src/VM.cpp > CMakeFiles/GCtest.dir/src/VM.cpp.i

CMakeFiles/GCtest.dir/src/VM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GCtest.dir/src/VM.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangenqi/Documents/project/GC/src/VM.cpp -o CMakeFiles/GCtest.dir/src/VM.cpp.s

CMakeFiles/GCtest.dir/src/Heap.cpp.o: CMakeFiles/GCtest.dir/flags.make
CMakeFiles/GCtest.dir/src/Heap.cpp.o: /Users/zhangenqi/Documents/project/GC/src/Heap.cpp
CMakeFiles/GCtest.dir/src/Heap.cpp.o: CMakeFiles/GCtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/zhangenqi/Documents/project/GC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/GCtest.dir/src/Heap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/GCtest.dir/src/Heap.cpp.o -MF CMakeFiles/GCtest.dir/src/Heap.cpp.o.d -o CMakeFiles/GCtest.dir/src/Heap.cpp.o -c /Users/zhangenqi/Documents/project/GC/src/Heap.cpp

CMakeFiles/GCtest.dir/src/Heap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/GCtest.dir/src/Heap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangenqi/Documents/project/GC/src/Heap.cpp > CMakeFiles/GCtest.dir/src/Heap.cpp.i

CMakeFiles/GCtest.dir/src/Heap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/GCtest.dir/src/Heap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangenqi/Documents/project/GC/src/Heap.cpp -o CMakeFiles/GCtest.dir/src/Heap.cpp.s

# Object files for target GCtest
GCtest_OBJECTS = \
"CMakeFiles/GCtest.dir/src/test.cpp.o" \
"CMakeFiles/GCtest.dir/src/VM.cpp.o" \
"CMakeFiles/GCtest.dir/src/Heap.cpp.o"

# External object files for target GCtest
GCtest_EXTERNAL_OBJECTS =

GCtest: CMakeFiles/GCtest.dir/src/test.cpp.o
GCtest: CMakeFiles/GCtest.dir/src/VM.cpp.o
GCtest: CMakeFiles/GCtest.dir/src/Heap.cpp.o
GCtest: CMakeFiles/GCtest.dir/build.make
GCtest: CMakeFiles/GCtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/zhangenqi/Documents/project/GC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable GCtest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GCtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GCtest.dir/build: GCtest
.PHONY : CMakeFiles/GCtest.dir/build

CMakeFiles/GCtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GCtest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GCtest.dir/clean

CMakeFiles/GCtest.dir/depend:
	cd /Users/zhangenqi/Documents/project/GC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangenqi/Documents/project/GC /Users/zhangenqi/Documents/project/GC /Users/zhangenqi/Documents/project/GC/build /Users/zhangenqi/Documents/project/GC/build /Users/zhangenqi/Documents/project/GC/build/CMakeFiles/GCtest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/GCtest.dir/depend

