cmake_minimum_required(VERSION 3.14)
project(Ludo-poo2)

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

add_executable(Ludo-poo2 main.cpp main.cpp Jugador.cpp Jugador.h Recorrido.cpp Recorrido.h)
target_link_libraries (Ludo-poo2 sfml-graphics sfml-window sfml-system)