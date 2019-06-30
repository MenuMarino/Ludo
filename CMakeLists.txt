cmake_minimum_required(VERSION 3.14)
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

<<<<<<< HEAD
add_executable(Ludo Tablero.cpp Jugador.h Jugador.cpp Ficha.cpp main.cpp Window.cpp Window.h CasillaCasa.cpp CasillaCasa.h CasillaComienzo.cpp CasillaComienzo.h CasillaSegura.cpp CasillaSegura.h CasillaNormal.cpp CasillaNormal.h CasillaDestino.cpp CasillaDestino.h Juego.cpp DadoResultado.h)
target_link_libraries (Ludo sfml-graphics sfml-window sfml-system)
=======
add_executable(Ludo Tablero.cpp Jugador.h Jugador.cpp Ficha.cpp main.cpp Window.cpp Window.h Juego.cpp DadoResultado.h)
target_link_libraries (Ludo sfml-graphics sfml-window sfml-system)
>>>>>>> 084e9f2462e7bb1163d816394ec92f8b51968d48
