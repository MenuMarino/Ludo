cmake_minimum_required(VERSION 3.13.4)
project(Ludo)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "/usr/local/Cellar/sfml/2.5.1/include/SFML")
set(SFML_LIBRARY_DIR "/usr/local/Cellar/sfml/2.5.1/lib")
set(SFML_DIR "/usr/local/Cellar/sfml/2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(Ludo Tablero.cpp Jugador.h Ficha.cpp main.cpp Window.cpp Window.h DadoResultado.h)
target_link_libraries (Ludo sfml-graphics sfml-window sfml-system)