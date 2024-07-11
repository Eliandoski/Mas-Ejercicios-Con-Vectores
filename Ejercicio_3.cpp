//Estudiante: Cifuentes González Elian
//Fecha de entrega: 10/07/2024
//Curso: 1ro de TI

//3) Programa que transforma un número entero en su equivalente en letras - primera parte

#include <iostream>
using namespace std;

//Array de string que contiene las unidades
const string unidades[]={"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Once", "Doce", 
"Trece","Catorce", "Quince", "Diecises", "Diecisiete", "Dieciocho", "Diecinueve"};

//Array de string que contiene las decenas
const string decenas[]{"", "Diez", "Veinte", "Treinta", "Cuarenta", "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"};

//Devuelve las unidades del array de string
string GetUnidades(int num)
{
    return unidades[num];

}

int main ()
{
    int num1 = 30;
    string resultado1  = GetUnidades(num1);
    cout << endl << num1 << " su equivalente en letras es: " << resultado1;

    int num2 = 15;
    string resultado2  = GetUnidades(num2);
    cout << endl << num2 << " su equivalente en letras es: " << resultado2;


    return 0;
}