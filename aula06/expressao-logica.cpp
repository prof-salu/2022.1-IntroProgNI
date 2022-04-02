#include <iostream>
using namespace std;

int main(){
	int idade;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	if(idade > 15 && idade < 18){
		cout << "Voto facultativo.";
	}
}
