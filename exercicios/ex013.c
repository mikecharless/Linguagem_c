#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, quadrado, cubo;
	float raizq, raizc;
	
	printf("Insira um n�mero: ");
	scanf("%d", &numero);
	
	quadrado = pow(numero,2);
	cubo = pow(numero,3);
	raizq = sqrt(numero);
	raizc = pow(numero, 1.0/3.0);
	
	printf("Quadrado: %d\n", quadrado);
	printf("Cubo: %d\n", cubo);
	printf("Ra�z quadrada: %f\n", raizq);
	printf("Ra�z cubica: %f\n", raizc);
}
