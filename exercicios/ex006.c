#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, salarior;
	
	printf("Insira o sal�rio base: ");
	scanf("%f", &salario);
	
	salarior = salario*1.05 - (0.07*salario);
	printf("Sal�rio a receber: %.2f\n", salarior);
}
