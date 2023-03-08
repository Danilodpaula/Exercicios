#include <stdio.h>
#include <stdio.h>
#define NULL 0

void encontra(int *inicial, int *Final){
    int verifica;
    for(;inicial <= Final; inicial++){
        if(*inicial == 2){
            printf("%d\n", &inicial[*inicial]);
            verifica++;
        }
        if(verifica = 0){
            return NULL;
        }
    }
}

int main(){
    int num[10] = {2,24,25,27,26,3,6,5,3,2};
    encontra(&num[0], &num[10]);
    return 0;
}
