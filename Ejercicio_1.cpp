//Estudiante: Cifuentes González Elian
//Fecha de entrega: 10/07/2024
//Curso: 1ro de TI

//1) Programa que ordena un vector de cadenas de caracteres

#include <iostream>
using namespace std;

//Función que ordena un vector de cadenas de caracteres
void OrdenSecuencial(string x[], int total) 
{
    for (int k = 0; k < total; k++) {
        for (int j = k + 1; j < total; j++) 
        {
            if (x[k] > x[j]) 
            { 
                string aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}

// Función que imprime los elementos del vector de cadenas de caracteres
void ImprimeVector(string x[], int total) 
{
    for (int k = 0; k < total; k++) {
        cout << x[k] << endl;
    }
}

int main() {
    const int MAX = 10;
    
    string nombres[] = {"Cifuentes Elian", "Ramirez Juan", "Zambrano Julian", "Gonzalez Marco", "Lopez Rene", "Fernandez Pedro", "Garcia Luis", "Perez Jose", "Rodriguez Carlos", "Martinez Miguel"};

    cout << "Lista Original de Estudiantes:" << endl;
    ImprimeVector(nombres, MAX);
    OrdenSecuencial(nombres, MAX);
   
    cout << endl << "Lista Ordenada de Estudiantes:" << endl;
    ImprimeVector(nombres, MAX);

    return 0;
}