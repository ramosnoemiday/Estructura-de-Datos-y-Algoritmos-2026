#include <iostream>
#include <thread> // Librería fundamental para paralelismo

using namespace std;

// Función que será ejecutada por diferentes hilos
void ejecutarTarea(int id) {
    cout << "Tarea [" << id << "] ejecutandose de forma paralela." << endl;
}

int main() {
    cout << "--- Inicio de ejecucion con hilos ---" << endl;

    // Se crean los hilos y se les asigna una tarea de inmediato
    thread hilo1(ejecutarTarea, 1);
    thread hilo2(ejecutarTarea, 2);
    thread hilo3(ejecutarTarea, 3);

    // Sincronización: El programa principal espera a que los hilos finalicen
    hilo1.join();
    hilo2.join();
    hilo3.join();

    cout << "--- Todas las tareas han finalizado ---" << endl;

    return 0;
}