#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float base, altura, area;
	
	printf("Informe a base do triângulo: ");
	scanf("%f", &base);
	printf("Informe a altura do triângulo: ");
	scanf("%f", &altura);
	
	area = base * altura;
	
	printf("Área do triângulo: %.2f u.a\n", area);
}
