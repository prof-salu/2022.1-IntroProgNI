#include <iostream>
using namespace std;

int main(){
	char chove;
	
	cout << "Hoje esta chovendo?";
	cin >> chove;
		
	if(chove == 's'){
		cout << "E melhor levar o guarda chuva.\n";
	}else{
		cout << "Vai pra praia.\n";
	}
	
	cout << "Fim do programa!";
}
