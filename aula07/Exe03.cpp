#include <iostream>
using namespace std;

int main(){
	//Encontrar o dobro de um número caso ele seja positivo e o seu triplo 
	//caso seja negativo, imprimindo o resultado.
	
	int numero;
	
	cout <<"Informe um numero: ";
	cin >> numero;
	
	if(numero > 0){
		//numero = numero * 2;
		numero *= 2;
		cout << numero;
	}
	
	if(numero < 0){
		//numero = numero * 3;
		numero *= 3;
		cout << numero;
	}
	
	
}
