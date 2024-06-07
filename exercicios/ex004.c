#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Informe o salário: ");
	scanf("%f", &salario);
	
	printf("Novo salário: %.2f\n", salario*1.25);
}
