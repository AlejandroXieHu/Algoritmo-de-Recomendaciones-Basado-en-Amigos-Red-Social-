Algoritmo de Recomendaciones Basado en Amigos (Red Social)

📌 LINK DEL VIDEO DE EXPLICACIÓN
https://youtu.be/87GdxdRrG7E

📋 Descripción

Este proyecto implementa un sistema de recomendación de usuarios basado en similitud de gustos y relaciones de amistad, inspirado en redes sociales como Instagram y TikTok.

El usuario puede:

Ingresar su nombre

Seleccionar sus gustos desde una lista

Elegir a sus amigos entre los usuarios disponibles

Comparar sus gustos con los de sus amigos

Obtener recomendaciones de gustos que no tiene pero que poseen sus amigos

Además, el programa muestra para cada usuario registrado sus amigos, gustos compartidos y recomendaciones.

🎯 Características

✔ 10 usuarios con gustos y amigos predefinidos

✔ Lista de intereses disponible para elegir

✔ Elección de amigos con validación y sin repeticiones

✔ Validaciones completas al elegir gustos

✔ Evita gustos repetidos

✔ Comparación rápida usando unordered_set


💻 Uso del programa

Al iniciar, el programa pedirá:

-Tu nombre

-Cantidad de gustos a elegir y selección de cada gusto mediante números

-Cantidad de amigos a elegir y selección de cada amigo mediante números

Ejemplo:

Escribe tu nombre: Alejandro

¿Cuántos gustos quieres elegir? 3

Lista de gustos:
1) Música
2) Fitness
3) Tecnología
4) Cine
5) Deportes
6) Videojuegos
7) Arte
8) Moda
9) Viajes

Elige tu gusto #1: 3

Elige tu gusto #2: 4

Elige tu gusto #3: 1


¿Cuántos amigos quieres elegir? 2

Lista de usuarios disponibles:

1) Diego
2) Alonso
3) David
4) Guillermo
...
Elige al amigo #1: 1

Elige al amigo #2: 3


Resultados:

=== RESULTADOS PARA TI ===

Tienes 2 gustos en común con Diego.

Recomendaciones basadas en Diego: Cine Videojuegos


Tienes 1 gusto en común con David.

Recomendaciones basadas en David: Deportes


=== RESULTADOS DE CADA USUARIO ===

Usuario: Diego

Amigos: Alonso David Iker

Tienes 1 gusto en común con Alonso.

  Recomendación: Deportes
  
Tienes 2 gustos en común con David.

  Recomendación: Videojuegos
...

🔍 ¿Cómo funciona internamente?

1️⃣ Estructura Usuario

Cada usuario contiene:

-Nombre

-Gustos (vector<string>)

-Amigos (vector<string>)

2️⃣ Lista de intereses

Incluye:

Música

Tecnología

Cine

Videojuegos

Deportes

Viajes

Arte

Moda

Fitness

3️⃣ Elección del usuario

El usuario elige sus gustos y amigos mediante números.

Validaciones:

-No repetir gustos ni amigos

-No ingresar números inválidos

-No exceder el límite disponible

4️⃣ Cálculo de similitud

Se usa unordered_set para comparar los gustos rápidamente.

Similitud = número de gustos compartidos entre dos usuarios

5️⃣ Recomendación

Se sugieren los gustos de los amigos que el usuario no tiene

6️⃣ Resultados finales

Para el usuario actual: muestra gustos en común y recomendaciones basadas en cada amigo

Para cada usuario registrado: muestra amigos, gustos compartidos y recomendaciones

Si no hay coincidencias: muestra un mensaje indicando que no hay gustos compartidos
