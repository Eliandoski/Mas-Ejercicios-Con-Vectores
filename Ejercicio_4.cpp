//Estudiante: Cifuentes González Elian
//Fecha de entrega: 10/07/2024
//Curso: 1ro de TI

//4) Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector

#include <iostream>

using namespace std;

//Función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector
int contarVeces(int x[], int total, int num) {
    int cont = 0;
    for(int i = 0; i < total; i++) {
        if(x[i] == num) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int x[] = {5, 8, 3, 14, 8, 22, 8};
    int MAX = sizeof(x) / sizeof(x[0]);
    int num = 8;

    int cantveces = contarVeces(x, MAX, num);

    cout << "El número " << num << " aparece " << cantveces << " veces en el vector" << endl;

    return 0;
}