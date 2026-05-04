#include <iostream>
#include <vector>
using namespace std;

//función que representa la unidad de trabajo a realizar
void tarea(int id) {
    cout << "Ejecutando tarea " << id << " de forma secuencial" << endl;
}

int main() {
    //inicio del ciclo de control: las tareas se procesan una por una
    for (int i = 1; i <= 3; ++i) {
        tarea(i); // Cada llamada espera a que la anterior finalice
    }
    return 0;
}