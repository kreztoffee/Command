cmake_minimum_required(VERSION 3.20)
project(Command VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(Command)
target_sources(Command PRIVATE
        Command.cpp
        CopyCommand.cpp
        CutCommand.cpp
        Invoker.cpp
        ObjectReceiver.cpp
        PasteCommand.cpp
        main.cpp)
target_include_directories(Command PUBLIC ${PROJECT_BINARY_DIR})
