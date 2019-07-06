# Ludo POO2

    Este es un proyecto del curso de Programación Orientada a Objetos II.

# Requisitos

    - Tener un CLion versión 3.1.
    - Tener instalado [SFML](https://www.sfml-dev.org/download.php).
    - Especificar la ruta de los directorios 'lib', 'include' y 'SFML' en el CMakeLists.

# Especificaciones
	- Ludo clásico, de 2 a 4 jugadores.
	- 1 : rojo 
	- 2 : azul 
	- 3 : verde
	- 4 : amarillo

# Reglas de juego o programa
    El juego debe desarrollarse siguiendo las siguientes reglas:
    - La cantidad de jugadores debe ser de 2 a 4 jugadores.
    - Al comenzar el juego, se debe especificar el numero de jugadores y el nombre que va a tener cada uno. El color de cada jugador se elige al azar.
    - Cada jugador tiene su turno donde puede lanzar el dado. El jugador se mueve 'x' casillas, donde 'x' es el numero que se obtuvo por lanzar el dado.
    - Si sacas 6 en el dado, se te otorga la posibilidad de jugar de nuevo. Si te sacas tres 6 seguidos, pierdes tu turno por suertudo.
    - Si tu ficha cae en una casilla donde habia otra ficha de distinto color, esa ficha se va a la casa de su color respectivo y tu ficha ahora ocupará la casilla. El jugador cuya ficha fue desterrada tendrá que volver a sacar 6 para poner a su ficha en juego.
    - Cada jugador, luego de avanzar el numero de casillas necesarias, entra a su zona segura. Solo ese jugador puede entrar a su zona segura.
    - La casilla destino se encuentra al final de la zona segura. Se debe llegar ahí al tirar el dado con los numeros de movimientos exactos para llegar.
    - Gana el jugador que logre meter sus 4 fichas a la casilla destino.
	
# Instrucciones de uso
    Para jugar nuestra version de Ludo es necesario que se sigan los siguietes pasos:
    	Paso 1: Seleccionar el numero de jugadores.
	*Se creará una ventana con el tablero de juego. En el centro de este habrá un botón con un dado*
	Paso 2: El primer jugador debe presionar el botón del dado. Si obtiene el numero 6, podrá seleccionar una ficha para iniciar su 	juego, de lo contrario, será turno del siguiente jugador.
	Paso 3: El siguiente jugador deberá presionar el dado una vez finalizado el turno del jugador previo. Siguiendo las reglas del juego, si el jugador tiene una ficha en juego y saca 6, tendrá la opción de sacar otra ficha o mover la que ya tiene disponible. De lo contrario, se verá obligado a sacar una ficha nueva.
	Paso 4: Repetir paso 3.
	
   	
	
# Desarrolladores

    - Rodrigo Céspedes
    - Benjamin Diaz
    - Gabriel Spranger
