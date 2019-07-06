# Ludo POO2

    Este es un proyecto del curso de Programación Orientada a Objetos II. Para este proyecto, hemos decidido hacer una versión del famoso juego de Ludo utilizando el lenguaje de programación C++ y una librería gráfica llamada SFML.

# Requisitos

    - Tener un CLion versión 3.1.
    - Tener instalado [SFML](https://www.sfml-dev.org/download.php).
    - Especificar la ruta de los directorios 'lib', 'include' y 'SFML' en el CMakeLists.

# Especificaciones
	- El juego cuenta con tablero y un botón de dado.
	- 1 : rojo 
	- 2 : azul 
	- 3 : verde
	- 4 : amarillo
	
# Reglas de juego o programa
    Para comenzar a jugar, es importante tener en cuanta las siguientes reglas de juego:
    
    - La partida se juega con una cantidad de 2 a 4 jugadores.
    - Al comenzar el juego, se debe especificar el numero de jugadores y el nombre que va a tener cada uno. El color de cada jugador se elige al azar.
    -Para sacar una ficha de tu casa, es necesario sacar el número 6 con el dado. No puedes poner una ficha en juego si el lugar de comienzo esta ocupado por otra ficha tuya, si lo intentas hacer o si no sacas 6 cuando tengas todas las fichas en casa, perderás el turno.
    - Cada jugador tiene su turno donde puede lanzar el dado. El jugador se mueve 'x' casillas, donde 'x' es el numero que se obtuvo por lanzar el dado.
    - Si tu dado dio un resultado y haces click en una ficha tuya que está en casa, pierdes tu turno por tratar de mover una ficha que no tiene permitido moverse.
    - Nadie se puede comer en las casillas comienzo, ya sea amarilla, verde, roja o azul. Es decir, pueden haber múltiples fichas en una casilla comienzo. Si tu ficha está tapada por otra en una casilla comienzo y es tu turno y quieres mover dicha ficha, simplemente haz click en la ficha que está encima y la tuya se moverá.
    - Si tu dado dio un resultado y haces click en una ficha tuya que está en casa, pierdes tu turno por tratar de mover una ficha que no tiene permitido moverse.
    - Si sacas 6 en el dado, se te otorga la posibilidad de jugar de nuevo. Si te sacas tres 6's seguidos, pierdes tu turno por suertudo.
    - Si tu ficha cae en una casilla donde habia otra ficha, esa ficha se va a la casa de su color respectivo. El jugador cuya ficha fue desterrada en este turno, tendra que volver a sacar 6 para poner su ficha en juego.
    - Cada jugador, luego de avanzar el numero de casillas necesarias, entra a su zona segura. Solo ese jugador puede entrar a su zona segura.
    - La casilla destino se encuentra al final de la zona segura. Para llegar ahi se necesita tirar el dado y que el número obtenido sea el exacto para llegar a la casilla destino, de lo contrario la ficha no se moverá y se perderá el turno.
    - Gana el que logra meter sus 4 fichas a la casilla destino.
    
# Instrucciones de uso
    Para utilizar el juego, es importante seguir las siguientes instrucciones de juego:
    Paso 1: Se seleccionará el numero de jugadores y el juego asignará los colores para cada jugador.
    *Se ha iniciado el juego, habrá aparecido una pantalla con el tablero y un botón de dado al centro de éste*
    Paso 2: El primer jugador presionará el dado y desarrollará su turno según las instrucciones.
    Paso 3: Repetir la misma dinámica con todos los jugadores en orden hasta que haya un ganador.

# Comentarios

* No tuvimos la necesidad de usar herencia, ya que una sola clase Casilla podía tener atributos como la ficha que está ya en ella, ciertas coordenadas que solo las fichas de un cierto color podían alcanzar, etc. Es decir, hacer herencia nos iba a complicar el proceso, ya que nuestro vector casillas dentro de la clase tablero solo aceptaba la clase Casilla. Si hubieramos hecho herencia, hubieramos tenido que hacer dynamic_cast<>() para identificar apropiadamente casa casilla, lo cual se hace en runtime, pero nosotros lo necesitábamos en compiletime. Debido a que no usamos herencia, no fue necesario usar el tipo abstracto de datos.

* No tuvimos que usar ningún algoritmo de STL, ya que los algoritmos necesitados para Ludo son bien simples, más precisamente, son sencillas fórmulas matemáticas con un poco de lógica. Tratar de usar STL era como usar un Cluster para usar Microsoft Word.

* La programación genérica nos pareció inútil también, ya que habían líneas bien trazadas entre lo que hace cada función que hicimos, es decir, cada función solo iba a funcionar y tenía que hacerlo, solo con ciertos tipos de datos. No tuvimos la necesidad de hacer una función que tenga que funcionar con distintos tipos de datos.

* En cuanto a la programación reactiva, sí nos iba a servir, pero el tiempo nos quedó corto y no pudimos optimizar el código para que tenga un mejor aspecto y performance con el paradigma de programación reactiva. Sin embargo, nuestro juego funciona perfectamente sin necesidad de la programación recativa.

* La programación concurrente nos hubiera ayudado a mejorar drásticamente el performance de nuestro juego, ya que podríamos haber puesto un thread a correr la funcion while (window.isOpen()). No obstante, dentro de esa función, llamábamos otras distintas funciones, y si a esas las llamábamos con threads, nos iba a dar muchos problemas, ya que las threads se tendrían que comunicar entre sí. Además, tratamos de usar threads para crear las 80 casillas aproximadamente, pero no funcionó, ya que nos daba un error de malloc, algo así como que estábamos borrando algo antes de que se cree.

* Finalmente, sí usamos la programación orientada a objetos, ya que nos ayudó a organizar nuestro código y a aislar, hasta cierto extento, las responsabilidades de cada entidad dentro del juego. Lo que sí pudimos haber hecho es quitar un poco más la lógica del Window.cpp y moverla a las clases, pero nuevamente, el tiempo nos quedó corto.

* Una cosa a notar en nuestro código es que usamos la doble referencia entre clases, entre la clase Casilla y la clase Ficha. Esto no lo pudimos evitar y nos pareció la mejor solución para nuestro problema. La casilla debe saber que tiene una ficha, ya que si otra ficha pide moverse a esa casilla, la casilla debe decirle a la ficha que ya estaba en su lugar, que se vaya a su casa, ya que la otra ficha que pidió moverse a su lugar, la botó. Además, cada ficha debe saber en qué casilla está para decirle a su casilla que está ocupada y cuando la ficha se mueve, le tiene que decir que está libre. 
Usamos este mecanismo para hacer la implementación de que las fichas que caigan en el mismo lugar, se coman.

# Desarrolladores

    - Rodrigo Céspedes
    - Benjamin Diaz
    - Gabriel Spranger Rojas
