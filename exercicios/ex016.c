#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int nascimento, ano;
	
	printf("Ano de nascimento: ");
	scanf("%d", &nascimento);
	printf("Ano atual: ");
	scanf("%d", &ano);
	
	printf("\nIdade atual: %d\n", ano - nascimento);
	printf("Idade em 2030: %d\n", 2030 - nascimento);
}
