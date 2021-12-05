#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int formarVectorDim1(int a[], int x){ //esta função forma um vetor de 1 dimensão
    for (int i=0; i<x; i++){
        printf("Indique o valor da %dª entrada:\n", i);
        scanf("%d", &a[i]);
    }
}
int formarVectorDim2(int y, int x, int a[][y]){ //esta função forma um vetor de 2 dimensões
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            printf("Indique o valor da entrada (%d, %d):\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
int random1Dim(int a[], int x){ //esta função devolve um valor random do arry
    time_t t;
    srand((unsigned)time(&t));
    printf("%d\n", a[rand()%x]);
}
