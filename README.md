Algoritmo de Recomendaciones Basado en Amigos (Red Social)

📌 LINK DEL VIDEO DE EXPLICACIÓN


📋 Descripción

Este proyecto implementa un sistema de recomendación de usuarios basado en similitud de gustos, inspirado en redes sociales como Instagram o TikTok.
Está desarrollado en C++ usando estructuras, vectores, validaciones y ordenamiento.

El programa permite que un usuario:

Escriba su nombre

Seleccione sus gustos desde una lista de intereses disponibles

Compare sus intereses con los de otros 10 usuarios registrados

Obtenga recomendaciones ordenadas por la cantidad de gustos en común

Es ideal para practicar:

Estructuras

Vectores

Búsqueda eficiente con unordered_set

Ordenamiento con std::sort

Validaciones de entrada

🎯 Características

✔ Registro de 10 usuarios con gustos predefinidos

✔ Lista de intereses disponible (con verificación de repetidos)

✔ Comparación eficiente con unordered_set

✔ Cálculo de similitud basado en gustos compartidos

✔ Resultados ordenados de mayor a menor

✔ Mensajes adaptados según singular/plural

✔ Recomendación automática

✔ Validaciones completas para evitar errores

💻 Uso del programa

Al iniciar, el programa solicita:

Tu nombre

Cuántos gustos quieres elegir

Elegir tus gustos uno por uno desde una lista numerada

Ejemplo:

Escribe tu nombre: Alejandro
¿Cuántos gustos quieres elegir? (máximo 9): 3

Elige tus gustos:
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

2️⃣ Lista de intereses disponible

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

El usuario selecciona gustos mediante números.

Incluye validaciones:

No repetir gustos

No números fuera de rango

No exceder el límite máximo

4️⃣ Cálculo de similitud

Se utiliza un unordered_set para buscar coincidencias en tiempo O(1).
La similitud es:

Cantidad de gustos en común entre dos usuarios.

5️⃣ Ordenamiento

Las similitudes se ordenan de mayor a menor usando std::sort.

6️⃣ Recomendación

Se muestran únicamente usuarios que compartan 1 o más gustos.

Si no hay coincidencias:

Ningún usuario comparte gustos contigo.
