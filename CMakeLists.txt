cmake_minimum_required(VERSION 3.10)

project(JuegoDeDados LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(juego_dados
    main.cpp
    menu.cpp
    juego.cpp
    Funciones.cpp
    dados.cpp
    estadisticas.cpp
    console_utils.cpp
)

if (MSVC)
    target_compile_options(juego_dados PRIVATE /W4)
else()
    target_compile_options(juego_dados PRIVATE -Wall -Wextra -pedantic)
endif()
