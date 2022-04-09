#include <iostream>
using namespace std;

int main(){
	//No curso de Informática da Escola Barizon HR, a média final é calculada a partir de 3
	//notas que variam de 0 a 10. Faça um programa que receba as 3 notas de um aluno,
	//calcule a imprima a média aritmética e o conceito desse estudante, conforme tabela
	//abaixo:
	//	Média Final Conceito
	//	0,0 a 4,9 	Insuficiente
	//	5,0 a 6,9 	Recuperação
	//	7,0 a 8,9 	Bom
	//	9,0 a 10 	Muito Bom
	
	float nota1, nota2, nota3, media;
	
	cout << "Informe a note 01: ";
	cin >> nota1;
	
	cout << "Informe a note 02: ";
	cin >> nota2;
	
	cout << "Informe a note 03: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	cout << "Media final: " << media << "\n";
	
	if(media > 0 && media < 5){
		cout << "Situacao: INSUFICIENTE";
	}else if(media >= 5 && media < 7){
		cout << "Situacao: RECUPERACAO";
	}else if(media >= 7 && media < 9){
		cout << "Situacao: BOM";
	}else if(media >= 9){
		cout << "Situacao: MUITO BOM!";
	}	
}
