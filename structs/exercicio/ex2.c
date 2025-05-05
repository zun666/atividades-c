//Problema no c�digo original:
struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p;
    p->idade = 20;
    p->altura = 1.75;
}

//Solu��es poss�veis:
//1. Aloca��o est�tica (recomendada para casos simples):

#include <stdlib.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    
    if (p == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }
    
    p->idade = 20;
    p->altura = 1.75;
    
    free(p);  // Libera a mem�ria alocada
    return 0;
}

//2. Aloca��o din�mica (para quando precisar de aloca��o em tempo de execu��o):
#include <stdlib.h>

struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p = (struct Pessoa*)malloc(sizeof(struct Pessoa));
    
    if (p == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }
    
    p->idade = 20;
    p->altura = 1.75;
    
    free(p);  // Libera a mem�ria alocada
    return 0;
}

//Resposta � pergunta: O que est� faltando � a aloca��o de mem�ria para o ponteiro p. 
//Antes de usar um ponteiro para struct, � necess�rio:
//Ou criar uma vari�vel est�tica e fazer o ponteiro apontar para ela (usando o operador &)
//Ou alocar mem�ria dinamicamente usando malloc() (n�o esquecer de incluir <stdlib.h>)
//O c�digo original tenta acessar mem�ria atrav�s de um ponteiro n�o inicializado, o que pode causar comportamento indefinido ou falha de segmenta��o.