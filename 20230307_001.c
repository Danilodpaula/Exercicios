#include <stdio.h>
#include <stdlib.h>

void imprime(float *inicial, float *Final){
    for(;inicial <= Final;inicial++){
        printf("%.2f\n", *inicial);
    }
}

int main(){
    float num1[3] = {1,2,3,4};
    float num2[4] = {5,6,7,8,9};
    float num3[5] = {10,10,12,13,14,15};
    //imprime os vetores
    imprime(&num1[0], &num1[3]);
    imprime(&num2[0], &num2[4]);
    imprime(&num3[0], &num3[5]);
    return 0;
}
