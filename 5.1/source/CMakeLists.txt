cmake_minimum_required(VERSION 3.5)
project(permutedindex
        VERSION 0.0.1
        DESCRIPTION "Permuted index app"
        LANGUAGES CXX)

#Target
add_executable(permindexbinary main.cpp src/breaker.cpp src/getline.cpp src/print_out.cpp 
src/sort_detect.cpp src/string_length.cpp)


target_compile_features(permindexbinary PRIVATE cxx_std_17)
target_include_directories(permindexbinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)