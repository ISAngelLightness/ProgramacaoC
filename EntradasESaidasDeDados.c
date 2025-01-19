#include<stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[22] = "Isaac Furtado de Paula";
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Opção: %c\n", opcao);
    int vida;
    printf("Por favor digite quantas vidas você quer: ");
    scanf(" %d", &vida);
    printf("\nvoce selecionou %d vidas correto? e essa vida tem %d quando multiplicado por 100\n", vida, vida * 100);
    return 0;
}