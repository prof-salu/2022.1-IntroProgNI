#include <iostream>
using namespace std;

int main(){
    // Capturar as notas dos alunos e imprimir a sua media
    float nota = 0;
    float somaNotas;

    int contaAluno = 0;

    while(true){
        if(nota < 0){
            break;
        }
        cout << "Informe a nota: ";
        cin >> nota;
        contaAluno++;
        somaNotas += nota; //somaNotas = somaNotas + nota;
    }
    cout << "Media: " << somaNotas / contaAluno;
}