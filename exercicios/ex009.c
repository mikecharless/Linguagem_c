#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	
	printf("Informe a base do tri�ngulo: ");
	scanf("%f", &base);
	printf("Informe a altura do tri�ngulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	
	printf("�rea do tri�ngulo: %.2f u.a\n", area);
}
