#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominador);
Fracao simplificarFracao(Fracao F);

int main() {
    system("clear");

    Fracao X = criarFracao(48,72);
    printf("Valores da fracao: %d/%d\n", X.numerador, X.denominador);
    X = simplificarFracao(X);
    printf("Valores simplificado: %d/%d\n", X.numerador, X.denominador);
    
    return 0;
}

Fracao criarFracao(int numerador, int denominador) {
    Fracao f;
    f.numerador = numerador;
    f.denominador = denominador;
    return f;
}

Fracao simplificarFracao(Fracao F) {

    int MDC = 1;
    int aux = (F.numerador > F.denominador) ? F.denominador : F.numerador; 

    for(int i = 0; i < aux; i++){
        if(F.numerador % i == 0 && F.denominador % i == 0) {
            MDC = i;
        }
    }

    F.numerador = F.numerador / MDC;
    F.denominador = F.denominador / MDC;

    return F;
}