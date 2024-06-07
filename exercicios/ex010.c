n#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, area;
	
	printf("Insira o raio: ");
	scanf("%f", &raio);
	
	area = pi*pow(raio,2);
	
	printf("Área do círculo: %.2f u.a\n", area);
}
