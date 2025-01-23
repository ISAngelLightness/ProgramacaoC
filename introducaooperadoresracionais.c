#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    // > maior que
    printf("%d > %d => %d\n", a, b, a > b);
    // < menor que
    printf("%d < %d => %d\n", a, b, a < b);
    // > maior ou igual que
    printf("%d >= %d => %d\n", a, b, a >= b);
    // < menor ou igual que
    printf("%d <= %d => %d\n", a, b, a <= b);
    // == igual a
    printf("%d == %d => %d\n", a, b, a == b);
    // != diferente de
    printf("%d != %d => %d\n", a, b, a != b);
    return 0;
}