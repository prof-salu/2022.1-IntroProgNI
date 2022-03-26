#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int num1, num2;
	int somaQuadrado, raizQuadrada;
	
	cout << "Informe o numero 01: ";
	cin >> num1;
	
	cout << "Informe o numero 02: ";
	cin >> num2;
	
	somaQuadrado = pow((num1 + num2), 2);
	raizQuadrada = sqrt(somaQuadrado);
	
	cout << "Soma dos valores ao quadrado: " << somaQuadrado;
	cout << "\nRaiz quadrada: " << raizQuadrada;
}
