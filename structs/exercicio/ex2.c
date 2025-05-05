//Problema no código original:
struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p;
    p->idade = 20;
    p->altura = 1.75;
}

//Soluções possíveis:
//1. Alocação estática (recomendada para casos simples):

#include <stdlib.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    
    if (p == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    
    p->idade = 20;
    p->altura = 1.75;
    
    free(p);  // Libera a memória alocada
    return 0;
}

//2. Alocação dinâmica (para quando precisar de alocação em tempo de execução):
#include <stdlib.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    
    if (p == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    
    p->idade = 20;
    p->altura = 1.75;
    
    free(p);  // Libera a memória alocada
    return 0;
}

//Resposta à pergunta: O que está faltando é a alocação de memória para o ponteiro p. 
//Antes de usar um ponteiro para struct, é necessário:
//Ou criar uma variável estática e fazer o ponteiro apontar para ela (usando o operador &)
//Ou alocar memória dinamicamente usando malloc() (não esquecer de incluir <stdlib.h>)
//O código original tenta acessar memória através de um ponteiro não inicializado, o que pode causar comportamento indefinido ou falha de segmentação.