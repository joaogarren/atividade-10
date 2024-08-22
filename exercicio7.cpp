#include <iostream>
#include <vector>

int main() {
    int numNotas;
    std::vector<double> notas;
    std::vector<double> pesos;

    // Solicita o número de notas
    std::cout << "Digite o número de notas: ";
    std::cin >> numNotas;

    // Verifica se o número de notas é válido
    if (numNotas <= 0) {
        std::cout << "Número de notas deve ser positivo." << std::endl;
        return 1;
    }

    // Solicita as notas e seus respectivos pesos
    for (int i = 0; i < numNotas; ++i) {
        double nota, peso;
        std::cout << "Digite a nota " << i + 1 << ": ";
        std::cin >> nota;
        std::cout << "Digite o peso da nota " << i + 1 << ": ";
        std::cin >> peso;

        notas.push_back(nota);
        pesos.push_back(peso);
    }

    // Calcula a média ponderada
    double somaNotasPesadas = 0;
    double somaPesos = 0;

    for (int i = 0; i < numNotas; ++i) {
        somaNotasPesadas += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    double mediaPonderada = somaNotasPesadas / somaPesos;

    // Exibe a média ponderada
    std::cout << "A média ponderada das notas é: " << mediaPonderada << std::endl;

    return 0;
}
