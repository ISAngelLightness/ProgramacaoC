#include<stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[30];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua matricula: ");
    scanf(" %d", &matricula);

    printf("Nome: %s, Matricula: %d, Altura: %f, Idade: %d\n", nome, matricula, altura, idade);
    return 0;
}