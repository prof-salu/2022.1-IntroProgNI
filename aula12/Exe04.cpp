#include <iostream>
using namespace std;

int main(){
	//4) Faça um programa estruturado que leia uma quantidade não determinada de números positivos. 
	//   Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. 
	//   O número que encerrará a leitura será zero.
	
	int numero = 1;
	int contaPar = 0;
	int contaImpar = 0;
	int somaPar = 0;
	int somaNumeros = 0;	
	
	while(numero != 0){
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero > 0){
			//Apenas os numeros positivos			
			//Soma o valor de todos os numeros
			somaNumeros = somaNumeros + numero;
			
			if(numero % 2 == 0){
				//par
				contaPar++;
				//Soma o valor apenas dos numeros pares
				somaPar = somaPar + numero;				
			}else{
				//impar
				contaImpar++;
			}
		}
	}
	
	cout << "Total PAR: " << contaPar << endl;
	cout << "Media PAR: " << (somaPar/contaPar) << endl;
	cout << "Total IMPAR: " << contaImpar << endl;
	cout << "Media GERAL: " << (somaNumeros/(contaPar+contaImpar))<< endl;
}
