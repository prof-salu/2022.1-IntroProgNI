#include <iostream>
using namespace std;

int main(){
	//1) Desenvolver um programa que efetue a soma de todos os n�meros �mpares que s�o m�ltiplos 
	//   de tr�s e que se encontram no conjunto dos n�meros de 1 at� 500. 
	
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

