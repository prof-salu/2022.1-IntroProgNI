#include <iostream>
using namespace std;

int main(){
	//1) Desenvolver um programa que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos 
	//   de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500. 
	
	int somaNumeros = 0;
	int numero = 1;
	
	while(numero <= 500){
		if(numero % 2 != 0){
			//numero impar
			if(numero % 3 == 0){
				//multiplo de tres
				cout << numero << " ";
				
				somaNumeros = somaNumeros + numero;
			}
		}
		
		numero++;
	}
	
	cout << "\n\n\nA soma dos numeros impares multiplos de 3 entre 1 e 500: " << somaNumeros;

}
