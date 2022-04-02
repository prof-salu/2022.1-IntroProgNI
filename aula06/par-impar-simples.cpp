#include <iostream>
using namespace std;

int main(){
	 int numero;
	 
	 cout << "Informe um numero: ";
	 cin >> numero;
	 
	 if(numero % 2 == 0){
	 	cout <<"Numero par.\n";
		cout << "Fim do teste de par.";
	 }	 	 
	 
	 if(numero % 2 != 0){
	 	cout << "Numero impar.\n";
	 	cout << "Fim do teste de impar.";
	 }
}
