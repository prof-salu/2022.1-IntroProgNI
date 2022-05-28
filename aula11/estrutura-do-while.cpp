#include <iostream>
using namespace std;

int main(){
    // Capturar as notas dos alunos e imprimir a sua media
    float nota = -1;
    float somaNotas;
    int contaAluno = 0;

    do{        
        cout << "Informe a nota: ";
        cin >> nota;
        contaAluno++;
        somaNotas += nota; //somaNotas = somaNotas + nota;
    }while(nota >= 0);
    
    cout << "Media: " << somaNotas / contaAluno;
}