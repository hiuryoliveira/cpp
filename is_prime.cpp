#include <iostream>
using namespace std;

/** 
 * Função para verificar se um número é primo.
 * 
 * @param n Número inteiro
 * @return true se o número for primo, false caso contrário
 */
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Digite um número inteiro: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " é um número primo." << endl;
        return 0;
    }

    cout << number << " não é um número primo." << endl;
    return 0;
}

