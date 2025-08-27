#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const int linhas = 3;
    const int colunas = 3;
    int matriz[linhas][colunas];

    cout << "Digite 9 números inteiros para preencher a matriz 3x3:\n";
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout <<endl <<"Matriz 3x3:"<<endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    int somaTotal = 0;
    int maiorValor = matriz[0][0];
    int somaDiagonal = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            somaTotal += matriz[i][j];
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
            if (i == j) { 
                somaDiagonal += matriz[i][j];
            }
        }
    }

    cout <<endl <<"Soma de todos os elementos: " << somaTotal << endl;
    cout << "Maior valor da matriz: " << maiorValor << endl;
    cout << "Soma dos elementos da diagonal principal: " << somaDiagonal << endl;

    return 0;
}
