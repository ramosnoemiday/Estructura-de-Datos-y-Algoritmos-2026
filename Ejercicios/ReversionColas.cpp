#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void mostrarCola(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> cola;
    stack<int> pila;

    cola.push(1);
    cola.push(2);
    cola.push(3);

    cout << "Cola original: ";
    mostrarCola(cola);

    while (!cola.empty()) {
        pila.push(cola.front());
        cola.pop();
    }

    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    cout << "Cola invertida: ";
    mostrarCola(cola);

    return 0;
}