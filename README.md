Algoritmo de Recomendaciones Basado en Amigos (Red Social)
📌 LINK DEL VIDEO DE EXPLICACIÓN


📋 Descripción

Este proyecto implementa un sistema de recomendación de usuarios basado en similitud de gustos, inspirado en redes sociales como Instagram y TikTok.

El usuario:

Ingresa su nombre

Selecciona gustos desde una lista

Compara sus gustos con los de 10 usuarios registrados

Obtiene recomendaciones ordenadas por coincidencias

Es ideal para practicar estructuras, vectores, validaciones y ordenamiento en C++.

🎯 Características

✔ 10 usuarios con gustos predefinidos

✔ Lista de intereses disponible

✔ Validaciones completas al elegir gustos

✔ Evita gustos repetidos

✔ Comparación rápida con unordered_set

✔ Ordenamiento de coincidencias de mayor a menor

✔ Muestra solo usuarios con gustos en común

✔ Mensajes correctos según singular/plural

💻 Uso del programa

Al iniciar, el programa te pedirá:

Tu nombre

Cuántos gustos quieres elegir

Seleccionar esos gustos uno por uno

Ejemplo:

Escribe tu nombre: Alejandro
¿Cuántos gustos quieres elegir? (máximo 9): 3


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


Selección:

Elige tu gusto #1: 3
Elige tu gusto #2: 4
Elige tu gusto #3: 1


Resultados:

=== Resultados para Alejandro ===
Diego: 2 gustos en común
Guillermo: 1 gusto en común
Valeria: 0 gustos en común


Recomendaciones:

Usuarios recomendados:
- Diego (Tiene 2 gustos en común)
- Guillermo (Tiene 1 gusto en común)

🔍 ¿Cómo funciona internamente?
1️⃣ Estructura Usuario

Cada usuario contiene:

Nombre

Lista de gustos (vector<string>)

2️⃣ Lista de intereses

Incluye:

Música

Tecnología

Arte

Cine

Deportes

Videojuegos

Moda

Fitness

Viajes

3️⃣ Elección del usuario

El usuario elige gustos mediante números.
Validaciones incluidas:

No repetir gustos

No ingresar números inválidos

No exceder el límite de gustos

4️⃣ Cálculo de similitud

Se usa unordered_set para comparar gustos rápidamente.

Similitud = número de gustos compartidos.

5️⃣ Ordenamiento

Se ordenan las coincidencias usando std::sort de mayor a menor.

6️⃣ Recomendación final

Se muestran solamente usuarios con 1 o más gustos en común.

Si no hay coincidencias:

Ningún usuario comparte gustos contigo.
