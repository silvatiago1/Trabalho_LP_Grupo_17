#include<stdio.h>
#include"functions-team-17.h"
int main(void){
    int x;
    printf("Indique o tamanho do vector:\n");
    scanf("%d", &x);
    int a[x];
    formarVectorDim1(a, x);
    random1Dim(a,x);

    return 0;
}
