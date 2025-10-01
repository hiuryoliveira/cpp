#include <iostream>
using namespace std;

/** 
 * Função para contar o número de dígitos em um número inteiro.
 * 
 * @param num Número inteiro
 * @return Número de dígitos
 */
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Digite um número inteiro: ";
    cin >> number;
    
    int digitCount = countDigits(number);
    cout << "O número de dígitos em " << number << " é: " << digitCount << endl;
  
    return 0;
}