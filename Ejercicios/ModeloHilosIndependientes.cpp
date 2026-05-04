#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Función que ejecuta cada hilo de forma independiente
void tarea(int id) {
    for (int i = 1; i <= 5; i++) {
        cout << "Hilo " << id << " ejecutando iteracion " << i << endl;
        
        // Simula trabajo (cada hilo tiene su propio tiempo)
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    
    cout << "Hilo " << id << " finalizo su ejecucion" << endl;
}

int main() {
    // Creación de hilos independientes
    thread hilo1(tarea, 1);
    thread hilo2(tarea, 2);
    thread hilo3(tarea, 3);

    // Esperar a que todos los hilos terminen
    hilo1.join();
    hilo2.join();
    hilo3.join();

    cout << "Todos los hilos han terminado" << endl;

    return 0;
}