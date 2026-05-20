#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluarPostfija(string expresion) {
    stack<int> pila;

    for (char c : expresion) {
        if (isdigit(c)) {
            pila.push(c - '0'); 
        } 
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int un_operando2 = pila.top(); pila.pop();
            int un_operando1 = pila.top(); pila.pop();

            switch (c) {
                case '+': pila.push(un_operando1 + un_operando2); break;
                case '-': pila.push(un_operando1 - - un_operando2); break;
                case '*': pila.push(un_operando1 * un_operando2); break;
                case '/': pila.push(un_operando1 / un_operando2); break;
            }
        }
    }
    return pila.top();
}

int main() {
    string expresion = "53+2*"; 
    cout << "Resultado de evaluar " << expresion << " es: " << evaluarPostfija(expresion) << endl;
    return 0;
}