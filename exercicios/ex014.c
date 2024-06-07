#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, res;
	
	printf("Insira dois números em sequência:\n");
	scanf("%f %f", &num1, &num2);
	
	res = pow(num1, num2);
	
	printf("Resultado: %f",res);
	
}
