#include <iostream>
using namespace std;

int main(){
	//2) Desenvolver um programa que leia a altura de 5 pessoas. Este programa deverá calcular e mostrar: 
		//a. A menor altura do grupo; 
		//b. A maior altura do grupo;
		
	float altura;
	float maisBaixo, maisAlto;
		
	for(int i = 0; i < 5; i++){
		cout << "Informe a sua altura: ";
		cin >> altura;
		
		if(i == 0){
			maisBaixo = altura;
			maisAlto = altura;
		}
		
		if(altura > maisAlto){
			maisAlto = altura;
		}
		
		if(altura < maisBaixo){
			maisBaixo = altura;
		}
	}
	
	cout << "Mais ALTO: " << maisAlto << endl;
	cout << "Mais BAIXO: " << maisBaixo << endl;

}
