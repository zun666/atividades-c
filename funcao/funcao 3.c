#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("A soma é %d\n", soma(num1, num2));
    return 0;
}