#include <iostream>
using namespace std;

int main(){
	//3680 segundos
	// 1 hora
	// 1 minutos
	//20 segundos
	
	int segundos;
	
	cout << "Informe o valor em segundos: ";
	cin >> segundos;
	
	cout << "\nHoras: " << segundos / 3600;
	cout << "\nMinutos: " << (segundos % 3600) / 60;
	cout << "\nSegundos: " << segundos % 60;
}


