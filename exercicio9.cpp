#include <iostream>
#include <cmath>

bool isPrimo(int numero) {
    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) return false;
    
    // Verifica se o número é 2 ou 3, que são primos
    if (numero == 2 || numero == 3) return true;
    
    // Verifica se o número é par ou múltiplo de 3
    if (numero % 2 == 0 || numero % 3 == 0) return false;
    
    // Verifica a primalidade para números maiores que 3
    for (int i = 5; i <= std::sqrt(numero); i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    int numero;
    
    // Solicita um número inteiro positivo ao usuário
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;
    
    // Verifica se o número é positivo
    if (numero <= 0) {
        std::cout << "Número inválido! Por favor, digite um número inteiro positivo." << std::endl;
        return 1;
    }
    
    // Verifica se o número é primo
    if (isPrimo(numero)) {
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }
    
    return 0;
}