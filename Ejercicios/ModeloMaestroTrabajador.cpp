#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
using namespace std;

queue<int> tareas; // Cola compartida
mutex m;           // Protege la cola

// Trabajador toma tareas
void trabajador(int id) {
    while (true) {
        m.lock(); // Bloquea la cola

        if (tareas.empty()) { 
            m.unlock();
            break; // Termina si no hay trabajo
        }

        int t = tareas.front(); // Toma tarea
        tareas.pop();
        m.unlock(); // Libera la cola

        cout << "Trabajador " << id << " procesa tareas -> " << t << endl; // Ejecuta tarea
    }
}

int main() {
    // Maestro crea tareas
    for (int i = 1; i <= 5; i++) tareas.push(i);

    // Crea trabajadores
    thread a(trabajador,1), b(trabajador,2);

    a.join(); b.join(); // Espera

    cout << "Fin" << endl;

    return 0;
}