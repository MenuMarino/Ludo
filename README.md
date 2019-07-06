# Ludo POO2

    Este es un proyecto del curso de Programación Orientada a Objetos II.

# Requisitos

    - Tener un CLion versión 3.1.
    - Tener instalado [SFML](https://www.sfml-dev.org/download.php).
    - Especificar la ruta de los directorios 'lib', 'include' y 'SFML' en el CMakeLists.

# Especificaciones
	- 0 : blanco 
	- 1 : rojo 
	- 2 : azul 
	- 3 : verde
	- 4 : amarillo
	
# Reglas de juego o programa
    Para comenzar a jugar, es importante tener en cuanta las siguientes reglas de juego:
    - La partida se juega con una cantidad de 2 a 4 jugadores.
    - Al comenzar el juego, se debe especificar el numero de jugadores y el nombre que va a tener cada uno. El color de cada jugador se elige al azar.
    -Para sacar una ficha de tu casa, es necesario sacar el número 6 con el dado. No puedes poner una ficha en juego si el lugar de comienzo esta ocupado por otra ficha tuya, si lo intentas hacer, perderás el turno.
    - Cada jugador tiene su turno donde puede lanzar el dado. El jugador se mueve 'x' casillas, donde 'x' es el numero que se obtuvo por lanzar el dado.
    - Si sacas 6 en el dado, se te otorga la posibilidad de jugar de nuevo. Si te sacas tres 6's seguidos, pierdes tu turno por suertudo.
    - Si tu ficha cae en una casilla donde habia otra ficha, esa ficha se va a la casa de su color respectivo. El jugador cuya ficha fue desterrada en este turno, tendra que volver a sacar 6 para poner su ficha en juego.
    - Cada jugador, luego de avanzar el numero de casillas necesarias, entra a su zona segura. Solo ese jugador puede entrar a su zona segura.
    - La casilla destino se encuentra al final de la zona segura. Para llegar ahi se necesita tirar el dado y que el número obtenido sea el exacto para llegar a la casilla destino, de lo contrario la ficha no se moverá y se perderá el turno.
    - Gana el que logra meter sus 4 fichas a la casilla destino.
# Instrucciones de uso
    Para utilizar el juego, es importante seguir las siguientes instrucciones de juego:



# Desarrolladores

    - Rodrigo Céspedes
    - Benjamin Diaz
    - Gabriel Spranger
