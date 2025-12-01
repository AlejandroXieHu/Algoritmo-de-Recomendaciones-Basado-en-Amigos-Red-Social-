Algoritmo de Recomendaciones Basado en Amigos (Red Social)
(Proyecto en C++)
📌 LINK DEL VIDEO DE EXPLICACIÓN:

(Aquí puedes poner tu URL cuando la tengas)

📋 Descripción

Este proyecto implementa un sistema de recomendación de usuarios basado en similitud de gustos, inspirado en redes sociales como Instagram o TikTok.
Está desarrollado en C++ utilizando estructuras, vectores, validaciones y ordenamiento.

El programa permite que un usuario:

✏️ Escriba su nombre

🎯 Seleccione sus gustos desde una lista de intereses

👥 Compare sus gustos con los de otros 10 usuarios registrados

⭐ Obtenga recomendaciones ordenadas por cantidad de gustos en común

Es un proyecto ideal para aprender:

Estructuras

Vectores y conjuntos

Búsqueda eficiente

Ordenamiento

Validaciones de entrada

🎯 Características principales
✔ Registro de 10 usuarios con gustos predefinidos
✔ Lista de intereses disponible (con verificación de repetidos)
✔ Comparación rápida usando unordered_set
✔ Cálculo de similitud basado en gustos compartidos
✔ Resultados ordenados de mayor a menor
✔ Mensajes adaptados (“gusto” / “gustos”)
✔ Recomendación automática
✔ Validaciones para evitar errores (números incorrectos, gustos repetidos, etc.)
💻 Uso del programa

Cuando inicia, el programa te pedirá:

1️⃣ Tu nombre
2️⃣ Cuántos gustos deseas elegir
3️⃣ Elegir tus gustos mediante una lista numerada

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


Luego verás los resultados:

=== Resultados para Alejandro ===
Diego: 2 gustos en común
Guillermo: 1 gusto en común
Valeria: 0 gustos en común

Usuarios recomendados:
- Diego (Tiene 2 gustos en común)
- Guillermo (Tiene 1 gusto en común)

🔍 ¿Cómo funciona internamente?
1️⃣ Estructura Usuario

Cada usuario contiene:

nombre

lista de gustos (vector<string>)

2️⃣ Lista de intereses disponible

Ejemplos:

Música

Tecnología

Arte

Cine

Viajes

Deportes

Videojuegos

Etc.

3️⃣ Elección del usuario

El usuario selecciona gustos desde un menú numérico.

Validaciones incluidas:

❌ No puede repetir gustos

❌ No puede elegir números fuera de rango

❌ No puede exceder el límite de gustos

4️⃣ Cálculo de similitud

Se usa un unordered_set para comparar intereses de forma rápida (O(1)).

La similitud es simplemente:

Cantidad de gustos compartidos entre dos usuarios

5️⃣ Ordenamiento

Las coincidencias se ordenan con std::sort de mayor a menor.

6️⃣ Recomendación final

Solo se recomiendan usuarios con 1 o más gustos en común.

Si no hay coincidencias:

No hay recomendaciones.
