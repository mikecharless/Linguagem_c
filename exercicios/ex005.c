#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, salariof;
	float aumento;
	
	printf("Insira o sal�rio: ");
	scanf("%f", &salario);
	printf("O valor do aumento: ");
	scanf("%f", &aumento);
	
	salariof = salario + salario*(aumento/100);
	
	printf("Valor do aumento: %.2f\n", salario*(aumento/100));
	printf("Novo sal�rio: %.2f\n", salariof);
}
