#include <iostream>

using namespace std;

int main(){
    int dia;

    cout << "Informe o dia da semana: ";
    cin >> dia;
	
	switch(dia){
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Segunda";
            break;
        case 3:
            cout << "Terca";
            break;
        case 4:
            cout << "Quarta";
            break;
        case 5:
            cout << "Quinta";
        case 6:
            cout << "Sexta";
        case 7:
            cout << "Sabado";
            break;
        default: 
            cout << "Dia invalido";
    }
}