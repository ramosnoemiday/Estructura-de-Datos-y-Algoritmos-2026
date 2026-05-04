#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
using namespace std;

queue<int> cola;
mutex m;

void productor() {
    for (int i = 1; i <= 5; i++) {
        m.lock();
        cola.push(i);
        cout << "Producido: " << i << endl;
        m.unlock();
    }
}

void consumidor() {
    for (int i = 1; i <= 5; i++) {
        m.lock();
        if (!cola.empty()) {
            cout << "Consumido: " << cola.front() << endl;
            cola.pop();
        }
        m.unlock();
    }
}

int main() {
    thread p(productor), c(consumidor);
    p.join();
    c.join();
}