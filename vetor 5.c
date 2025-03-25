#include <stdio.h>
//funcao que imprime os elementos de um vetor
void mostrarVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

int main(){
    int dados[5] = {1, 3, 5, 7, 9};

//chamada da funcao e envio do vetor    
    mostrarVetor(dados, 5);
    
    return 0;
}
