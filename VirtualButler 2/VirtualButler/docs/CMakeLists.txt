
cmake_minimum_required(VERSION 3.10)

# set the project name
project(VirtualButler)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(VirtualButler src/main.cpp src/butler.cpp src/voice_recognition.cpp src/task_automation.cpp)

# include directories
include_directories(include)

# find and include Qt5
find_package(Qt5 COMPONENTS Core Gui Widgets 3DCore 3DRender 3DExtras REQUIRED)
target_link_libraries(VirtualButler Qt5::Core Qt5::Gui Qt5::Widgets Qt5::3DCore Qt5::3DRender Qt5::3DExtras)

# add the binary tree to the search path for include files
target_include_directories(VirtualButler PUBLIC "${PROJECT_BINARY_DIR}")

# specify the install path
install(TARGETS VirtualButler DESTINATION bin)

# enable testing
enable_testing()

# add tests
add_test(NAME test_butler COMMAND test_butler)
add_test(NAME test_voice_recognition COMMAND test_voice_recognition)
add_test(NAME test_task_automation COMMAND test_task_automation)
