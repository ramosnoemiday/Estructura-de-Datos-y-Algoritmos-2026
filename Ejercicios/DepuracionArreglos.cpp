#include <iostream>
using namespace std;

int main() {
    int original[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7; 
    
    int sinDuplicados[7];
    int nuevoTamano = 0; 

    for (int i = 0; i < n; i++) {
        bool esDuplicado = false;
        
        for (int j = 0; j < nuevoTamano; j++) {
            if (original[i] == sinDuplicados[j]) {
                esDuplicado = true;
                break; 
            }
        }
        
        if (!esDuplicado) {
            sinDuplicados[nuevoTamano] = original[i];
            nuevoTamano++;
        }
    }

    cout << "Lista sin duplicados: ";
    for (int i = 0; i < nuevoTamano; i++) {
        cout << sinDuplicados[i] << " ";
    }
    cout << endl;

    return 0;
}