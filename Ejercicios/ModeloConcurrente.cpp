#include <iostream>
#include <thread>
using namespace std;

void TAREA1(){
    for (int i = 1; i <= 5; i++){
         cout << "TAREA 1: " << i << endl;
    }

}

void TAREA2 (){
    for (int i = 1; i <= 5; i++){
        cout << "TAREA 2: " << i << endl;
    }
}

int main(){
    thread h1(TAREA1);
    thread h2(TAREA2);

    h1.join();
    h2.join();

    return 0;
}