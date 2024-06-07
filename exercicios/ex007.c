#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salario, liquido;
	
	printf("Insira o salário base: ");
	scanf("%f", &salario);
	
	liquido = salario + 600 - (salario*0.1);
	printf("Salário a receber: %.2f\n", liquido);
}
