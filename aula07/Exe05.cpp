#include <iostream>

using namespace std;

int main(){
	//Fa�a um programa que receba o sal�rio de um funcion�rio e o tempo de servi�o em
	//anos o programa devera reajustar o sal�rio em fun��o do tempo seguindo as regras
	//abaixo: 
		//funcion�rios com 10 ou mais de servi�o receberam um reajuste de 30%
		//funcion�rios com menos de 10 anos de servi�o receberam um reajuste de 37,5%.
		
		int tempoServico;
		float salario;
		
		cout << "Informe o tempo de servico: ";
		cin >> tempoServico;
		
		cout << "Informe o salario: ";
		cin >> salario;
		
		if(tempoServico >= 10){
			salario = salario * 1.3;
		}else{
			salario = salario * 1.375;
		}
		
		cout << "Salario com reajuste: R$" << salario;

}
