#include <stdio.h>

int main() {
	int valores[3];

	for(int i = 0; i < 3; i++) {
		printf("digite o valor da posicao %d:", i);
		scanf("%d", &valores[i]);
	}

	for(int i = 0; i < 3; i++) {
		printf("valores[%d] = %d\n", i, valores[i]);

	}

	return 0;
}