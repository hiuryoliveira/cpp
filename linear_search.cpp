#include <iostream>
using namespace std;

/** 
 * Função de busca linear.
 * 
 * @param arr Array onde buscar
 * @param n Tamanho do array
 * @param target Elemento a ser buscado
 * @return Índice do elemento se encontrado, -1 caso contrário
 */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = linearSearch(arr, n, target);
    
    if (result != -1){
        cout << "O elemento está no índice: " << result << endl;
        return 0;
    }
    
    cout << "Elemento não encontrado." << endl;
    return 0;
}
