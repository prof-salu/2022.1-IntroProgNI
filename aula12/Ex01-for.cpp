#include <iostream>
using namespace std;

int main(){
	//1) Desenvolver um programa que efetue a soma de todos os números ímpares que são múltiplos 
	//   de três e que se encontram no conjunto dos números de 1 até 500. 
	
	int somaNumeros = 0;
	
	for(int i = 1; i <= 500; i++){
		//cout << i << " "	;
		
		if(i % 2 != 0){
			//numero impar
			if(i % 3 == 0){
				//multiplo de 3
				cout << i << " ";
				somaNumeros = somaNumeros + i;
			}
		}
	}
	
	cout << "\n\n\nSoma dos numeros impares multiplos de 3 entre 1 e 500: " << somaNumeros;

}

