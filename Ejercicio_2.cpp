//Estudiante: Cifuentes González Elian
//Fecha de entrega: 10/07/2024
//Curso: 1ro de TI

//2) Programa que ordena un vector de enteros y devuelve el elemento mayor y menor de los números existentes en el vector

#include <iostream>
using namespace std;

//Función que ordena un vector de enteros
void OrdenSecuencial(int x[], int total) 
{
    for (int k = 0; k < total; k++) 
    {
        for (int j = k + 1; j < total; j++) 
        {
            if (x[k] > x[j]) 
            { 
                int aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }
}

// Función que imprime los elementos del vector de enteros
void ImprimeVector(int x[], int total)
 {
    for (int k = 0; k < total; k++) 
    {
        cout << x[k] << " ";
    }
    cout << endl;
}

int main() {
    
    
    int vector[] = {14, 5, 81, 94, 102, 3, 121, 72, 63, 11};
    int MAX = sizeof(vector) / sizeof(int); 

    OrdenSecuencial(vector, MAX);

    cout << "Vector Ordenado: ";
    ImprimeVector(vector, MAX);

    cout<<endl<< "El elemento menor del vector es: " << vector[0];
    cout<<endl<< "El elemento mayor del vector es: " << vector[MAX - 1];

    return 0; 
}