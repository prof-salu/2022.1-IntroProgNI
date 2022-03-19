#include <iostream>

int main(){
	float n1, n2, n3, n4, media;
	
	printf("Informe N1: ");
	scanf("%f", &n1);
	
	printf("Informe N2: ");
	scanf("%f", &n2);
	
	printf("Informe N3: ");
	scanf("%f", &n3);
	
	printf("Informe N4: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("Media final: %.1f", media);
	
}
