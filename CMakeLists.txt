cmake_minimum_required(VERSION 3.29)
project(StudentManSys)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH "$ENV{QT6_5_3HOME}/lib/cmake")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(StudentManSys
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

target_link_libraries(StudentManSys
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets)
target_compile_definitions(StudentManSys PRIVATE $<$<CONFIG:Debug>:QT_QML_DEBUG>)
