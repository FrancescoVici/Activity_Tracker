cmake_minimum_required(VERSION 3.14)
project(Activity_Tracker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

# Tell cmake where Qt is located
set(Qt5_DIR "~/Qt/5.12.2/clang_64/lib/cmake/Qt5")
# Tell cmake to find the modules Qt5Core and Qt5widgets
find_package(Qt5 COMPONENTS Core Widgets Test REQUIRED)

add_executable(Activity_Tracker main.cpp Activity.cpp Activity.h Register.cpp Register.h MainWindow.cpp MainWindow.h UserInputWindow.cpp UserInputWindow.h UserDeleteWindow.cpp UserDeleteWindow.h TestActivity.cpp TestActivity.h TestRegister.cpp TestRegister.h TestMainWindow.cpp TestMainWindow.h)

# Link the library to the executable
target_link_libraries(Activity_Tracker Qt5::Core Qt5::Widgets Qt5::Test)
