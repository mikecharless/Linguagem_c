#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Informe o sal�rio: ");
	scanf("%f", &salario);
	
	printf("Novo sal�rio: %.2f\n", salario*1.25);
}
