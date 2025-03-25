/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int somar(int a, int b) {
	return a + b; //retorna a somar
}

int main() {
	int x = 10, y = 5; //declara 2 variaveis inteiras
	int resultado;

	//chama a funcao somar passando x e y
	resultado = somar(x,y);

	printf("resultado da soma %d\n", resultado);

	return 0;

}