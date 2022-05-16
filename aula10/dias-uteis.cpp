#include <iostream>

using namespace std;

int main(){
    int dia;

    cout << "Informe o dia da semana: ";
    cin >> dia;
	//1 ou 7 --> FIM DE SEMANA
    //2 - 6 --> DIA UTIL
	switch(dia){
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Dia util";
            break;
        case 1:
        case 7:
            cout << "Fim de semana";
            break;

        default: 
            cout << "Dia invalido";
    }
}