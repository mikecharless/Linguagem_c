#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4;
	int soma;
	
	printf("Digite 4 números inteiros em sequência:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma dos números: %d.\n", soma);
}
