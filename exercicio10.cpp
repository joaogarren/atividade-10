#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicita ao usuário o número de elementos no array
    cout << "Digite o número de elementos no array: ";
    cin >> n;

    int array[n];

    // Solicita ao usuário os elementos do array
    cout << "Digite os elementos do array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Algoritmo de ordenação por bolha (Bubble Sort)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                // Troca os elementos se o anterior for maior que o próximo
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Exibe o array ordenado
    cout << "Array ordenado: ";
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}