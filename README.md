# Ludo POO2

Este es un proyecto del curso de Programación Orientada a Objetos II.

# Requisitos

- Tener un CLion versión 3.1.
- Tener instalado [SFML](https://www.sfml-dev.org/download.php).
- Especificar la ruta de los directorios 'lib', 'include' y 'SFML' en el CMakeLists.

# Especificaciones
- Los jugadores son identificados con colores:
	- 0 : blanco 
	- 1 : rojo 
	- 2 : azul 
	- 3 : verde
	- 4 : amarillo

# Instrucciones de uso

- Falta llenar

# Reglas de juego o programa

- 2 a 4 jugadores.
- Al comenzar el juego, se debe especificar el numero de jugadores y el nombre que va a tener cada uno. El color de cada jugador se elige al azar.
- Cada jugador tiene su turno donde puede lanzar el dado. El jugador se mueve x casillas, donde x es el numero que se obtuvo por lanzar el dado.
- Si sacas 6 en el dado, se te otorga la posibilidad de jugar de nuevo. Si te sacas tres 6 seguidos, pierdes tu turno por suertudo.
- Si tu ficha cae en una casilla donde habia otra ficha, esa ficha se va a la casa de su color respectivo.
- Cada jugador, luego de avanzar el numero de casillas necesarias, entra a su zona segura. Solo ese jugador puede entrar a su zona segura.
- La casilla destino se encuentra al final de la zona segura. Se debe llegar ahi con el numero de casillas exacto.
- Gana el que logra meter sus 4 fichas a la casilla destino.

# Desarrolladores

- Rodrigo Céspedes
- Benjamin Diaz
- Gabriel Spranger
