#include <iostream>
using namespace std;

int main(){
	//4) Fa�a um programa estruturado que leia uma quantidade n�o determinada de n�meros positivos. 
	//   Calcule a quantidade de n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos n�meros lidos. 
	//   O n�mero que encerrar� a leitura ser� zero.
	
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
