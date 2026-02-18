cmake_minimum_required(VERSION 3.10)
project(JardinProyectoProgra2)

set(CMAKE_CXX_STANDARD 17)

# Para que encuentre CImg.h
include_directories(${CMAKE_SOURCE_DIR})

add_executable(JardinProyectoProgra2
        main.cpp
        Figura.cpp
        Arbol.cpp
        Flor.cpp
        Jardin.cpp
        ../../Downloads/CImg_latest/CImg.h
        ../../Downloads/CImg_latest/CImg.h
)

# Librería necesaria para CImg en Windows
target_link_libraries(JardinProyectoProgra2 gdi32)