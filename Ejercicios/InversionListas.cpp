#include <iostream>
using namespace std;

int main() {
    int arreglo[] = {10, 20, 30, 40, 50};
    int n = 5; 

    cout << "Lista Original: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    cout << "Lista Invertida: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}