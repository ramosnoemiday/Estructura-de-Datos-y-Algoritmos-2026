#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {
    typedef tuple<int, string, string, float> Estudiante;

    Estudiante alumno1 = make_tuple(202601, "Dayana Ramos", "Ingenieria en Ciberseguridad", 17.5);

    cout << "--- GESTION DE ESTUDIANTE ---" << endl;
    cout << "ID: " << get<0>(alumno1) << endl;
    cout << "Nombres: " << get<1>(alumno1) << endl;
    cout << "Escuela Profesional: " << get<2>(alumno1) << endl;
    cout << "Promedio General: " << get<3>(alumno1) << endl;

    return 0;
}