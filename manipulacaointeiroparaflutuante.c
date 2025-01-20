#include<stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente_conciente = (float) a / b; // não perde as casas decimais
    float quociente_naociente = (a / b); // perde as casas decimais

    printf("%.2f\n", quociente_conciente);
    printf("%.2f\n", quociente_naociente);
    return 0;
}