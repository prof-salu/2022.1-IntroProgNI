#include <iostream>

using namespace std;

int main(){
    int dia;

    cout << "Informe o dia da semana: ";
    cin >> dia;
	
	if(dia == 1){
        cout << "Domingo";
    }else if(dia == 2){
        cout << "Segunda";
    }else if(dia == 3){
        cout << "Terca";
    }else if(dia == 4){
        cout << "Quarta";
    }else if(dia == 5){
        cout << "Quinta";
    }else if(dia == 6){
        cout << "Sexta";
    }else if(dia == 7){
        cout << "Sabado";
    }else{
        cout << "Dia invalido";
    }
}