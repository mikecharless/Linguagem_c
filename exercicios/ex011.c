#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	int tempo, hora, minuto, segundo;
	
	printf("Insira o tempo em segundos: ");
	scanf("%d", &tempo);
	
	hora = tempo/3600;
	minuto = (tempo%3600)/60;
	segundo = (tempo%3600)%60;
	
	printf("Horas: %d\n", hora);
	printf("Minutos: %d\n",minuto);
	printf("Segundo: %d\n",segundo);
}
