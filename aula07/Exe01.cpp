#include <iostream>
using namespace std;

int main(){
	//Fa�a um programa que leia os valores A, B, C e 
	//imprima na tela se a soma de A + B � menor que C.
	setlocale(LC_ALL, "Portuguese");//Exibe caracteres especiais na saida
	int a, b, c;
	
	cout << "Informe A: ";
	cin >> a;
	
	cout <<"Informe B: ";
	cin >> b;
	
	cout << "Informe C: ";
	cin >> c;
	
	if(a + b < c){
		cout << "A soma de A e B � menor que o valor de C.";
	}else{
		cout << "O valor de C � maior ou igual a soma de A e B.";
	}
}
