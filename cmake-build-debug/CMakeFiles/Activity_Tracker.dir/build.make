# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /opt/clion-2022.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2022.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Activity_Tracker.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Activity_Tracker.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Activity_Tracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Activity_Tracker.dir/flags.make

CMakeFiles/Activity_Tracker.dir/main.cpp.o: CMakeFiles/Activity_Tracker.dir/flags.make
CMakeFiles/Activity_Tracker.dir/main.cpp.o: ../main.cpp
CMakeFiles/Activity_Tracker.dir/main.cpp.o: CMakeFiles/Activity_Tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Activity_Tracker.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Activity_Tracker.dir/main.cpp.o -MF CMakeFiles/Activity_Tracker.dir/main.cpp.o.d -o CMakeFiles/Activity_Tracker.dir/main.cpp.o -c /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/main.cpp

CMakeFiles/Activity_Tracker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Activity_Tracker.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/main.cpp > CMakeFiles/Activity_Tracker.dir/main.cpp.i

CMakeFiles/Activity_Tracker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Activity_Tracker.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/main.cpp -o CMakeFiles/Activity_Tracker.dir/main.cpp.s

CMakeFiles/Activity_Tracker.dir/Activity.cpp.o: CMakeFiles/Activity_Tracker.dir/flags.make
CMakeFiles/Activity_Tracker.dir/Activity.cpp.o: ../Activity.cpp
CMakeFiles/Activity_Tracker.dir/Activity.cpp.o: CMakeFiles/Activity_Tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Activity_Tracker.dir/Activity.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Activity_Tracker.dir/Activity.cpp.o -MF CMakeFiles/Activity_Tracker.dir/Activity.cpp.o.d -o CMakeFiles/Activity_Tracker.dir/Activity.cpp.o -c /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Activity.cpp

CMakeFiles/Activity_Tracker.dir/Activity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Activity_Tracker.dir/Activity.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Activity.cpp > CMakeFiles/Activity_Tracker.dir/Activity.cpp.i

CMakeFiles/Activity_Tracker.dir/Activity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Activity_Tracker.dir/Activity.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Activity.cpp -o CMakeFiles/Activity_Tracker.dir/Activity.cpp.s

CMakeFiles/Activity_Tracker.dir/Register.cpp.o: CMakeFiles/Activity_Tracker.dir/flags.make
CMakeFiles/Activity_Tracker.dir/Register.cpp.o: ../Register.cpp
CMakeFiles/Activity_Tracker.dir/Register.cpp.o: CMakeFiles/Activity_Tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Activity_Tracker.dir/Register.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Activity_Tracker.dir/Register.cpp.o -MF CMakeFiles/Activity_Tracker.dir/Register.cpp.o.d -o CMakeFiles/Activity_Tracker.dir/Register.cpp.o -c /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Register.cpp

CMakeFiles/Activity_Tracker.dir/Register.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Activity_Tracker.dir/Register.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Register.cpp > CMakeFiles/Activity_Tracker.dir/Register.cpp.i

CMakeFiles/Activity_Tracker.dir/Register.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Activity_Tracker.dir/Register.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/Register.cpp -o CMakeFiles/Activity_Tracker.dir/Register.cpp.s

CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o: CMakeFiles/Activity_Tracker.dir/flags.make
CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o: ../MainWindow.cpp
CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o: CMakeFiles/Activity_Tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o -MF CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o.d -o CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o -c /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/MainWindow.cpp

CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/MainWindow.cpp > CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.i

CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/MainWindow.cpp -o CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.s

CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o: CMakeFiles/Activity_Tracker.dir/flags.make
CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o: ../UserInputWindow.cpp
CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o: CMakeFiles/Activity_Tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o -MF CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o.d -o CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o -c /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/UserInputWindow.cpp

CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/UserInputWindow.cpp > CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.i

CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/UserInputWindow.cpp -o CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.s

# Object files for target Activity_Tracker
Activity_Tracker_OBJECTS = \
"CMakeFiles/Activity_Tracker.dir/main.cpp.o" \
"CMakeFiles/Activity_Tracker.dir/Activity.cpp.o" \
"CMakeFiles/Activity_Tracker.dir/Register.cpp.o" \
"CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o" \
"CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o"

# External object files for target Activity_Tracker
Activity_Tracker_EXTERNAL_OBJECTS =

Activity_Tracker: CMakeFiles/Activity_Tracker.dir/main.cpp.o
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/Activity.cpp.o
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/Register.cpp.o
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/MainWindow.cpp.o
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/UserInputWindow.cpp.o
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/build.make
Activity_Tracker: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
Activity_Tracker: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
Activity_Tracker: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
Activity_Tracker: CMakeFiles/Activity_Tracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Activity_Tracker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Activity_Tracker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Activity_Tracker.dir/build: Activity_Tracker
.PHONY : CMakeFiles/Activity_Tracker.dir/build

CMakeFiles/Activity_Tracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Activity_Tracker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Activity_Tracker.dir/clean

CMakeFiles/Activity_Tracker.dir/depend:
	cd /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug /home/francesco/Scrivania/Activity_Tracker/Activity_Tracker/cmake-build-debug/CMakeFiles/Activity_Tracker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Activity_Tracker.dir/depend

