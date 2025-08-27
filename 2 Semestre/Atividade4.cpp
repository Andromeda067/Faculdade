#include <iostream>
using namespace std;

int main() {
    char frase[100]; // Array para armazenar a frase
    cout << "Digite uma frase: ";
    cin.getline(frase, 100); // Lê a frase inteira, incluindo espaços

    // a) Contar caracteres sem espaços
    int contagem = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') contagem++;
    }
    cout << "Quantidade de caracteres (sem espaços): " << contagem << endl;

    // b) Converter para maiúsculas
    cout << "Frase em maiúsculas: ";
    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        if (c >= 'a' && c <= 'z') c -= 32; // Converte letra minúscula para maiúscula
        cout << c;
    }
    cout << endl;

    // c) Frase ao contrário
    cout << "Frase invertida: ";
    int i = 0;
    while (frase[i] != '\0') i++; 
    for (int j = i - 1; j >= 0; j--) {
        cout << frase[j];
    }
    cout << endl;

    // d) Substituir 'a' ou 'A' por '@'
    cout << "Frase com 'a' substituída por '@': ";
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'A') cout << "@";
        else cout << frase[i];
    }
    cout << endl;

    return 0;
}
