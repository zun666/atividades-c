#include <stdio.h>

int main() {
	float notas[4];
	float soma = 0;
	float media;

	for(int i = 0; i < 4; i++) {
		printf("digite a nota %d:", i + 1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}

	media = soma /4;

	printf("media das notas %.2f\n:", media);

	return 0;
}