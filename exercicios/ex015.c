#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"Portuguese");
	int pe, polegada, jarda, milha;
	
	printf("Insira a media em pés: ");
	scanf("%d", &pe);
	
	polegada = pe*12;
	jarda = pe/3;
	milha = jarda/1760;
	
	printf("Polegadas: %d\n", polegada);
	printf("Jardas: %d\n", jarda);
	printf("Milhas: %d\n", milha);
	
}
