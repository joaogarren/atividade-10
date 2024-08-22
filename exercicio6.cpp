#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    double valor, taxaConversao, valorConvertido;

    // Solicita ao usuário o valor a ser convertido
    cout << "Digite o valor a ser convertido: ";
    cin >> valor;

    // Solicita ao usuário a taxa de conversão
    cout << "Digite a taxa de conversão: ";
    cin >> taxaConversao;

    // Calcula o valor convertido
    valorConvertido = valor * taxaConversao;

    // Exibe o valor convertido
    cout << "O valor convertido é: " << valorConvertido << endl;

    return 0;
}