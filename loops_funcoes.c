#include <stdio.h>

void count(int steps, int ordem){
    // forma inversa
    if ((steps > 0 && ordem == 0)){
        printf("%d\n", steps);
        count(steps-1, ordem);
    }
    // forma reversar
    if ((steps > 0 && ordem == 1)){
        count(steps-1, ordem);
        printf("%d\n", steps);
    }
}

int main(){
    printf("Diminuir\n");
    count(50, 0);
    printf("\nAumentar\n");
    count(50, 1);
    return 0;
}