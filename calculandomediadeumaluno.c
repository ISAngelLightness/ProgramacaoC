#include<stdio.h>

int main(){
    float primeiranota;
    float segundanota;
    float resultado;

    printf("Por favor informe as notas do Aluno:\n");
    printf("Primeira Nota: ");
    scanf("%f", &primeiranota);
    printf("Segunda Nota: ");
    scanf("%f", &segundanota);

    resultado = (float) primeiranota + segundanota;
    resultado /= 2;
    printf("Esse Aluno tirou %.2f\n", resultado);
    return 0;
}