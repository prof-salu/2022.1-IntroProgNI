#include <iostream>
using namespace std;

int main(){
	int valor;
	
	int notas50, notas20, notas10, notas200;
	
	cout << "Informe o valor a ser sacado: ";
	cin >> valor;
	
	notas200 = valor / 200;
	notas50 = (valor % 200) / 50;
	notas20 = ((valor % 200) % 50)/ 20;
	notas10 = (((valor % 200) % 50)% 20)/ 10;
	
	cout << "Total de notas de 200: " << notas200;
	cout << "\nTotal de notas de 50: " << notas50;
	cout << "\nTotal de notas de 20: " << notas20;
	cout << "\nTotal de notas de 10: " << notas10;
}
