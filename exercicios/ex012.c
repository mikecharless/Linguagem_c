#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor, notas100, notas50, notas20, notas10, notas5, notas2, saque;
	
	printf("Insira o valor a sacar: ");
	scanf("%d", &valor);
	
	notas100 = valor/100;
	valor = valor%100;
	notas50 = valor/50;
	valor = valor%50;
	notas20 = valor/20;
	valor = valor % 20;
	notas10 = valor/10;
	valor = valor%10;
	notas5 = valor/5;
	valor = valor%5;
	notas2 = valor/2;
	
	printf("n° de notas de R$ 100,00: %d\n",notas100);
	printf("n° de notas de R$ 50,00: %d\n", notas50);
	printf("n° de notas de R$ 20,00: %d\n", notas20);
	printf("n° de notas de R$ 10,00: %d\n", notas10);
	printf("n° de notas de R$: 5,00: %d\n", notas5);
	printf("n° de notas de R$: 2,00: %d\n", notas2);
	
}
