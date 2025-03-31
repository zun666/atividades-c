#include <stdio.h>

int dobro(int x) {
    return x * 2;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O dobro de %d é %d\n", num, dobro(num));
    return 0;
}