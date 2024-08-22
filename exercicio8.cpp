#include <iostream>

int main() {
    int numero;
    
    // Solicita um número inteiro positivo ao usuário
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;
    
    // Verifica se o número é positivo
    if (numero < 0) {
        std::cout << "Número inválido! Por favor, digite um número inteiro positivo." << std::endl;
        return 1;
    }
    
    // Inicializa a variável para armazenar o resultado do fatorial
    unsigned long long fatorial = 1;
    
    // Calcula o fatorial usando um loop
    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }
    
    // Exibe o resultado
    std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;
    
    return 0;
}