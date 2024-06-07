#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, salarior;
	
	printf("Insira o salário base: ");
	scanf("%f", &salario);
	
	salarior = salario*1.05 - (0.07*salario);
	printf("Salário a receber: %.2f\n", salarior);
}
