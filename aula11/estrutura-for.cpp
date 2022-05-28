#include <iostream>
using namespace std;

int main(){
    //Capturar a idade de 10 pessoas e informar a media.

    int idade;
    int somaIdade = 0;

    for(int i = 0; i < 30; i = i + 1){
        cout << "Informe a sua idade: ";
        cin >> idade;
        somaIdade = somaIdade + idade;
    }

    cout << "Media: " << (somaIdade)/10;
}