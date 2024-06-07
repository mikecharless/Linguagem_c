#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	printf("Insira o peso da primeira nota: ");
	scanf("%d", &peso1);
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	printf("Insir o peso da segunda nota: ");
	scanf("%d", &peso2);
	printf("Insira a terceira nota: ");
	scanf("%f", &nota3);
	printf("Insira o peso da terceira nota: ");
	scanf("%d", &peso3);
	
	media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
	
	printf("Média ponderada: %.2f\n", media);
	
}
