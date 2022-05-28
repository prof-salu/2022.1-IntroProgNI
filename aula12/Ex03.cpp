#include <iostream>
using namespace std;

int main(){
	//3) Escrever um programa que leia uma quantidade desconhecida de números e conte quantos 
	//   deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. 
	//   A entrada de dados deve terminar quando for lido um número negativo.
	
	int numero;
	
	int conta0_25 = 0;
	int conta26_50 = 0;
	int conta51_75 = 0;
	int conta76_100 = 0;
	
	do{
		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero >= 0 && numero <= 25){ 
			//[0-25]
			conta0_25++;
		}else if(numero >= 26 && numero <= 50){ 
			//[26-50]
			conta26_50++;
		}else if(numero >= 51 && numero <= 75){ 
			//[51-75]
			conta51_75++;
		}else if(numero >= 76 && numero <= 100){
			//[76-100]
			conta76_100++;
		}
				
	}while(numero >= 0);
	
	cout << "[00-25] --> " << conta0_25 << endl;
	cout << "[26-50] --> " << conta26_50 << endl;
	cout << "[51-75] --> " << conta51_75 << endl;
	cout << "[76-100] --> " << conta76_100 << endl;
}
