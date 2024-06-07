#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1, nota2, nota3;
	float media;
	
	printf("Informe três notas em sequência:\n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3)/3;
	
	printf("A média aritmética: %.2f\n", media);
	system("pause");
}
