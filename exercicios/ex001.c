#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4;
	int soma;
	
	printf("Digite 4 n�meros inteiros em sequ�ncia:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma dos n�meros: %d.\n", soma);
}
