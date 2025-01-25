#include <stdio.h>

int main() {
    int numero=0;
    do{
        if (numero % 3 == 0){
            printf("Esse numero %d, é impar!\n", numero);
        }
        numero++;
    } while(numero <= 10);
    return 0;
}