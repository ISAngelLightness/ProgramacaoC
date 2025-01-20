#include<stdio.h>

int main() {
    int soma1, soma2, resultado1;
    int subtracao1, subtracao2, resultado2;
    int multiplicacao1, multiplicacao2, resultado3;
    int divisao1, divisao2, resultado4;

    soma1 = 2;
    soma2 = 2;
    resultado1 = soma1 + soma2;

    subtracao1 = 10;
    subtracao2 = 20;
    resultado2 = subtracao1 - subtracao2;

    multiplicacao1 = 10;
    multiplicacao2 = 10;
    resultado3 = multiplicacao1 * multiplicacao2;
    
    divisao1 = 64;
    divisao2 = 4;
    resultado4 = divisao1 / divisao2;

    printf("Primeiro Resultado:\n");
    printf("%d+%d=%d\n", soma1, soma2, resultado1);
    printf("%d-%d=%d\n", subtracao1, subtracao2, resultado2);
    printf("%d*%d=%d\n", multiplicacao1, multiplicacao2, resultado3);
    printf("%d/%d=%d\n", divisao1, divisao2, resultado4);

    resultado1 += 100;
    resultado2 -= 2;
    resultado3 *= 3;
    resultado4 /= 4;

    
    printf("Novo Resultado Resultado:\n");
    printf("SOMA: %d\n", resultado1);
    printf("SUBTRAÇÃO: %d\n", resultado2);
    printf("MULTIPLICAÇÃO: %d\n", resultado3);
    printf("DIVISÃO: %d\n", resultado4);

    
    resultado1 ++;
    printf("%d++\n", resultado1);
    resultado1 --;
    printf("%d--\n", resultado1);


    resultado1 = --resultado2;
    printf("resultado1=--resultado2==%d\n", resultado1);

    resultado1 = ++resultado2;
    printf("resultado1=++resultado2==%d\n", resultado1);
    return 0;
}