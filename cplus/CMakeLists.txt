cmake_minimum_required(VERSION 3.20)
project(cplus)

set(CMAKE_CXX_STANDARD 14)

file (GLOB_RECURSE files leetcode/editor/cn/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" out ${file})
    add_executable (${out} ${file})
    message("file " ${file} " has been parsed! ")
endforeach ()
