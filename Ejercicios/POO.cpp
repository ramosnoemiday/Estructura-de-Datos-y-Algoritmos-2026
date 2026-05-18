#include <iostream>
#include <string>
using namespace std;

class ComponenteSonido {
public:
    virtual void emitirSonido() = 0;
};

class Mascota {
private:
    string nombre;
    int edad;

public:
    Mascota(string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << " | Edad: " << edad << " anios" << endl;
    }

    string getNombre() {
        return nombre;
    }

    virtual void alimentar() {
        cout << nombre << " esta comiendo comida generica." << endl;
    }
};

class Perro : public Mascota, public ComponenteSonido {
public:
    Perro(string _nombre, int _edad) : Mascota(_nombre, _edad) {}

    void alimentar() override {
        cout << getNombre() << " esta comiendo croquetas para perro." << endl;
    }

    void emitirSonido() override {
        cout << "[SISTEMA DE AUDIO] " << getNombre() << " dice: ¡Guau, Guau!" << endl;
    }
};

int main() {
    cout << "--- SISTEMA DE LA VETERINARIA ---" << endl;

    Mascota mascotaGenerica("Pelusa", 3);
    Perro miPerro("Firulais", 5);

    cout << "\n--- 1. MOSTRAR DATOS ---" << endl;
    mascotaGenerica.mostrarDatos();
    miPerro.mostrarDatos();

    cout << "\n--- 2. DEMOSTRACION DE POLIMORFISMO ---" << endl;
    mascotaGenerica.alimentar();
    miPerro.alimentar();

    cout << "\n--- 3. DEMOSTRACION DE INTEROPERABILIDAD ---" << endl;
    miPerro.emitirSonido();

    return 0;
}