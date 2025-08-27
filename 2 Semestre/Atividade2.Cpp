#include <iostream>
#include <windows.h>
using namespace std;

const int tamanhoArray = 5;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numeros[tamanhoArray];
    int opcao;


    cout << "Digite " << tamanhoArray << " números inteiros:" << endl;
    for (int i = 0; i < tamanhoArray; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Menu em loop
    do {
        cout <<endl << "Escolha uma opção:"<<endl;
        cout << "1 - Mostrar todos os valores"<<endl;
        cout << "2 - Mostrar valores pares"<<endl;
        cout << "3 - Calcular e exibir a média dos valores"<<endl;
        cout << "4 - Sair"<<endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Todos os valores: ";
                for (int i = 0; i < tamanhoArray; i++) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;

            case 2:
                cout << "Valores pares: ";
                for (int i = 0; i < tamanhoArray; i++) {
                    if (numeros[i] % 2 == 0) {
                        cout << numeros[i] << " ";
                    }
                }
                cout << endl;
                break;

            case 3: {
                int soma = 0;
                for (int i = 0; i < tamanhoArray; i++) {
                    soma += numeros[i];
                }
                double media = static_cast<double>(soma) / tamanhoArray;
                cout << "Média dos valores: " << media << endl;
                break;
            }

            case 4:
                cout << "Saindo..."<<endl;
                break;

            default:
                cout << "Opção inválida! Tente novamente."<<endl;
        }

    } while (opcao != 4);

    return 0;
}