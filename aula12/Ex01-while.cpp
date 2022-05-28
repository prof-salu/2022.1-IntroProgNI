#include <iostream>
using namespace std;

int main(){
	//1) Desenvolver um programa que efetue a soma de todos os números ímpares que são múltiplos 
	//   de três e que se encontram no conjunto dos números de 1 até 500. 
	
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
