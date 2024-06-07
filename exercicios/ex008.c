#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float deposito, rendimento, valort;
	float taxa;
	
	printf("Insira o valor do depósito: ");
	scanf("%f", &deposito);
	printf("Insira o valor da taxa: ");
	scanf("%f", &taxa);
	
	rendimento = deposito*(taxa/100);
	valort = deposito + rendimento;
	
	printf("Rendimento: %.2f\n", rendimento);
	printf("Valor total: %.2f\n", valort);
}
