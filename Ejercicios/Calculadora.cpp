#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "--- CALCULADORA ---" << endl;
    cout << "Ingrese primer numero: ";
    cin >> num1;

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingrese segundo numero: ";
    cin >> num2;

    if(op == '+')
        cout << "Resultado: " << num1 + num2;

    else if(op == '-')
        cout << "Resultado: " << num1 - num2;

    else if(op == '*')
        cout << "Resultado: " << num1 * num2;

    else if(op == '/') {
        if(num2 != 0)
            cout << "Resultado: " << num1 / num2;
        else
            cout << "No se puede dividir entre cero";
    }

    else
        cout << "Operador invalido";

    return 0;
}