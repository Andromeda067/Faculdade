#include <iostream>
#include <windows.h>

using namespace std;

//                PASSOS DA TAREFA 

/*
1- 	Solicite ao usuário a entrada de sua idade
2-  Verifique se a idade é maior ou igual a 18;
3-  Exiba uma mensagem de acordo com a condição:
*/

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int idade; 
    string NomeUsuario;

    cout << "Digite seu nome: ";
    getline(cin, NomeUsuario); // para caso o usuario queira colocar nome composto ou o nome completo

    cout << "Olá " << NomeUsuario << ", digite sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Você é maior de idade e pode acessar o conteúdo." << endl;
    } 
    else {
        cout << "Você é menor de idade e não pode acessar o conteúdo." << endl;
    }
    
}