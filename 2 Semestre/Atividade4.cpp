#include <iostream>
#include <windows.h>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    // a) Contar caracteres sem espaços
    int contagem = 0;
    for (char c : frase) {
        if (c != ' ') contagem++;
    }
    cout << "Quantidade de caracteres (sem espaços): " << contagem << endl;

    // b) Frase em maiúsculas
    string fraseMaiuscula = frase;
    transform(fraseMaiuscula.begin(), fraseMaiuscula.end(), fraseMaiuscula.begin(), ::toupper);
    cout << "Frase em maiúsculas: " << fraseMaiuscula << endl;

    // c) Frase ao contrário
    string fraseInvertida = frase;
    reverse(fraseInvertida.begin(), fraseInvertida.end());
    cout << "Frase invertida: " << fraseInvertida << endl;

    // d) Substituir 'a' por '@'
    string fraseSubstituida = frase;
    for (char &c : fraseSubstituida) {
        if (c == 'a') c = '@';
        if (c == 'A') c = '@'; 
    }
    cout << "Frase com 'a' substituída por '@': " << fraseSubstituida << endl;

    return 0;
}
