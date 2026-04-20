#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    char op;

    cout << "==========================" << endl;
    cout << "      CALCULADORA" << endl;
    cout << "==========================" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(op) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;

        default:
            cout << "Operador no valido." << endl;
    }

    cout << "==========================" << endl;

    return 0;
}