# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/armatik/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.9011.31/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/armatik/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.9011.31/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/armatik/CLionProjects/Armatik_Learning_Cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/Laba_2_6_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Laba_2_6_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Laba_2_6_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Laba_2_6_2.dir/flags.make

CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o: CMakeFiles/Laba_2_6_2.dir/flags.make
CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o: /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/Semestr\ 2/Lab\ 6/Laba_2_6_2.cpp
CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o: CMakeFiles/Laba_2_6_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o -MF CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o.d -o CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o -c "/home/armatik/CLionProjects/Armatik_Learning_Cplusplus/Semestr 2/Lab 6/Laba_2_6_2.cpp"

CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/armatik/CLionProjects/Armatik_Learning_Cplusplus/Semestr 2/Lab 6/Laba_2_6_2.cpp" > CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.i

CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/armatik/CLionProjects/Armatik_Learning_Cplusplus/Semestr 2/Lab 6/Laba_2_6_2.cpp" -o CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.s

# Object files for target Laba_2_6_2
Laba_2_6_2_OBJECTS = \
"CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o"

# External object files for target Laba_2_6_2
Laba_2_6_2_EXTERNAL_OBJECTS =

Laba_2_6_2: CMakeFiles/Laba_2_6_2.dir/Semestr_2/Lab_6/Laba_2_6_2.cpp.o
Laba_2_6_2: CMakeFiles/Laba_2_6_2.dir/build.make
Laba_2_6_2: CMakeFiles/Laba_2_6_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Laba_2_6_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Laba_2_6_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Laba_2_6_2.dir/build: Laba_2_6_2
.PHONY : CMakeFiles/Laba_2_6_2.dir/build

CMakeFiles/Laba_2_6_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Laba_2_6_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Laba_2_6_2.dir/clean

CMakeFiles/Laba_2_6_2.dir/depend:
	cd /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/armatik/CLionProjects/Armatik_Learning_Cplusplus /home/armatik/CLionProjects/Armatik_Learning_Cplusplus /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release /home/armatik/CLionProjects/Armatik_Learning_Cplusplus/cmake-build-release/CMakeFiles/Laba_2_6_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Laba_2_6_2.dir/depend

