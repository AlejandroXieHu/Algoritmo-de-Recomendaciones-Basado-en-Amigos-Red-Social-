#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

// Estructura para representar un usuario con su nombre, gustos y amigos
struct Usuario {
    string nombre;                // Nombre del usuario
    vector<string> gustos;        // Lista de gustos del usuario
    vector<string> amigos;        // Lista de amigos del usuario
};

// Clase que implementa el sistema de recomendaciones
class SistemaRecomendaciones {
private:
    vector<Usuario> usuarios;         // Lista de usuarios predefinidos
    vector<string> gustosDisponibles; // Lista de gustos disponibles para elegir

public:
    // Constructor: inicializa la lista de usuarios y los gustos disponibles
    SistemaRecomendaciones() {
        gustosDisponibles = {"Música", "Tecnología", "Cine", "Videojuegos", "Deportes", "Viajes", "Arte", "Moda", "Fitness"};

        usuarios = {
            {"Diego", {"Música", "Tecnología", "Cine"}, {"Alonso", "David", "Iker"}},
            {"Alonso", {"Deportes", "Viajes", "Cine"}, {"Diego", "Guillermo", "Camila"}},
            {"David", {"Tecnología", "Videojuegos", "Deportes"}, {"Diego", "Ana", "Valeria"}},
            {"Guillermo", {"Música", "Cine", "Arte"}, {"Alonso", "María", "Valentina"}},
            {"Iker", {"Videojuegos", "Tecnología", "Deportes"}, {"Diego", "David", "Valeria"}},
            {"María", {"Moda", "Arte", "Viajes"}, {"Guillermo", "Camila", "Ana"}},
            {"Valentina", {"Fitness", "Música", "Moda"}, {"Guillermo", "Ana", "María"}},
            {"Ana", {"Tecnología", "Moda", "Música"}, {"David", "Valentina", "Camila"}},
            {"Camila", {"Arte", "Cine", "Moda"}, {"Alonso", "María", "Ana"}},
            {"Valeria", {"Música", "Fitness", "Viajes"}, {"David", "Iker", "Camila"}}
        };
    }

    // Mostrar la lista de gustos disponibles para que el usuario elija
    void mostrarGustos() {
        cout << "\nElige tus gustos escribiendo el número correspondiente:\n";
        for (int i = 0; i < gustosDisponibles.size(); i++) {
            cout << i + 1 << ") " << gustosDisponibles[i] << endl;
        }
    }

    // Permitir al usuario elegir sus gustos
    vector<string> elegirGustos(int cantidad) {
        vector<string> elegidos;
        int opcion;

        for (int i = 0; i < cantidad; i++) {
            cout << "Elige el gusto #" << i + 1 << ": ";
            cin >> opcion;

            // Validar que la opción seleccionada sea válida
            if (opcion < 1 || opcion > gustosDisponibles.size()) {
                cout << "Número no válido. Elige entre 1 y "
                     << gustosDisponibles.size() << ".\n";
                i--; // Repetir la selección para este gusto
                continue;
            }

            string gusto = gustosDisponibles[opcion - 1];

            // Verificar que el gusto no haya sido seleccionado previamente
            if (find(elegidos.begin(), elegidos.end(), gusto) != elegidos.end()) {
                cout << "Ya elegiste ese gusto. Elige otro.\n";
                i--; // Repetir la selección para este gusto
                continue;
            }

            // Agregar el gusto seleccionado a la lista
            elegidos.push_back(gusto);
        }

        return elegidos;
    }

    // Permitir al usuario elegir amigos de la lista de usuarios
    vector<string> elegirAmigos(int cantidad, const string& miNombre) {
        vector<string> amigos;
        int opcion;

        cout << "\nLista de usuarios disponibles:\n";
        for (int i = 0; i < usuarios.size(); i++) {
            cout << i + 1 << ") " << usuarios[i].nombre << endl;
        }

        for (int i = 0; i < cantidad; i++) {
            cout << "Elige al amigo #" << i + 1 << ": ";
            cin >> opcion;

            // Validar que la opción seleccionada sea válida
            if (opcion < 1 || opcion > usuarios.size()) {
                cout << "Opción no válida. Elige entre 1 y " << usuarios.size() << ".\n";
                i--;
                continue;
            }

            string amigo = usuarios[opcion - 1].nombre;

            // Verificar que el amigo no haya sido seleccionado previamente
            if (find(amigos.begin(), amigos.end(), amigo) != amigos.end()) {
                cout << "Ya elegiste ese amigo.\n";
                i--;
                continue;
            }

            amigos.push_back(amigo);
        }

        return amigos;
    }

    // Calcular la cantidad de gustos en común entre dos listas de gustos
    int similitud(const vector<string>& a, const vector<string>& b) {
        unordered_set<string> setA(a.begin(), a.end());
        int conteo = 0;

        for (const string& g : b) {
            if (setA.count(g)) conteo++;
        }
        return conteo;
    }

    // Recomendar gustos que no están en la lista del usuario pero sí en la de sus amigos
    vector<string> recomendar(const vector<string>& misGustos, const vector<string>& gustosAmigo) {
        unordered_set<string> setMisGustos(misGustos.begin(), misGustos.end());
        vector<string> recomendados;

        for (const string& g : gustosAmigo) {
            if (!setMisGustos.count(g))
                recomendados.push_back(g);
        }
        return recomendados;
    }

    // Ejecutar el sistema de recomendaciones
    void ejecutar() {
        Usuario yo;
        cout << "Escribe tu nombre: ";
        cin >> yo.nombre;

        // Elegir la cantidad de gustos
        int cantGustos;
        cout << "¿Cuántos gustos quieres elegir? ";
        cin >> cantGustos;

        while (cantGustos < 1 || cantGustos > gustosDisponibles.size()) {
            cout << "Cantidad inválida. Elige entre 1 y " << gustosDisponibles.size() << ": ";
            cin >> cantGustos;
        }

        // Mostrar gustos disponibles y permitir al usuario seleccionarlos
        mostrarGustos();
        yo.gustos = elegirGustos(cantGustos);

        // Elegir la cantidad de amigos
        int cantAmigos;
        cout << "¿Cuántos amigos quieres elegir? ";
        cin >> cantAmigos;

        while (cantAmigos < 1 || cantAmigos > usuarios.size() - 1) {
            cout << "Elige entre 1 y " << usuarios.size() - 1 << ": ";
            cin >> cantAmigos;
        }

        // Permitir al usuario seleccionar amigos
        yo.amigos = elegirAmigos(cantAmigos, yo.nombre);

        // Mostrar resultados de similitudes y recomendaciones
        cout << "\n=== RESULTADOS PARA TI ===\n";

        for (const string& amigo : yo.amigos) {
            for (const Usuario& u : usuarios) {
                if (u.nombre == amigo) {
                    int s = similitud(yo.gustos, u.gustos);

                    cout << "\nTienes " 
                         << s << " " 
                         << (s == 1 ? "gusto" : "gustos")
                         << " en común con " << amigo << ".\n";

                    vector<string> rec = recomendar(yo.gustos, u.gustos);

                    if (!rec.empty()) {
                        cout << "Recomendaciones basadas en " << amigo << ": ";
                        for (const string& r : rec) cout << r << " ";
                        cout << endl;
                    }
                }
            }
        }

        // Mostrar resultados de cada usuario
        cout << "\n=== RESULTADOS DE CADA USUARIO ===\n";

        for (const Usuario& u : usuarios) {
            cout << "\nUsuario: " << u.nombre << "\nAmigos: ";
            for (const string& a : u.amigos) cout << a << " ";
            cout << "\n";

            for (const string& amigo : u.amigos) {
                for (const Usuario& otro : usuarios) {
                    if (otro.nombre == amigo) {
                        int s = similitud(u.gustos, otro.gustos);

                        cout << "Tienes " 
                             << s << " " 
                             << (s == 1 ? "gusto" : "gustos")
                             << " en común con " << amigo << ".\n";

                        vector<string> rec = recomendar(u.gustos, otro.gustos);
                        if (!rec.empty()) {
                            cout << "  Recomendación: ";
                            for (const string& r : rec) cout << r << " ";
                            cout << endl;
                        }
                    }
                }
            }
        }
    }
};

int main() {
    // Crear una instancia del sistema de recomendaciones y ejecutarlo
    SistemaRecomendaciones sistema;
    sistema.ejecutar();
    return 0;
}