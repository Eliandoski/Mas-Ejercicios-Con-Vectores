//Estudiante: Cifuentes González Elian
//Fecha de entrega: 10/07/2024
//Curso: 1ro de TI

/*5)Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario 
se debe guardar en un vector*/

#include <iostream>

using namespace std;

//Función que convierte un entero en su equivalente en binario
void convertirBinario(int num, int binario[], int total) {
    for (int i = total - 1; i >= 0; i--) {
        binario[i] = num % 2;
        num /= 2;
    }
}

int main() {
    const int MAX = 16;
    int binario[MAX] = {0};
    int num = 353;

    convertirBinario(num, binario, MAX);

    cout << "El número " << num << " en binario es: ";
    for (int i = 0; i < MAX; i++) {
        cout << binario[i] << " ";
    }
    cout << endl;

    int binario2[MAX] = {0};
    int num2 = 224;

    convertirBinario(num2, binario2, MAX);

    cout << "El número " << num2 << " en binario es: ";
    for (int i = 0; i < MAX; i++) {
        cout << binario2[i] << " ";
    }
    cout << endl;

    return 0;
}


