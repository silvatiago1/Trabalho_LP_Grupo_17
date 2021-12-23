#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void formarVectorDim1(int a[], int x){ //esta função forma um vetor de 1 dimensão
    for (int i=0; i<x; i++){
        printf("Indique o valor da %dª entrada:\n", i+1);
        scanf("%d", &a[i]);
        if (a[i]>=8 && a[i]<=27){
            continue;
        }
        else {
            while(a[i]<8 || a[i]>27){
            printf("O valor não está compreendido entre 8 e 27!\n");
            printf("Indique o valor da %dª entrada:\n", i+1);
            scanf("%d", &a[i]);
            }

        }
    }
}
void formarVectorDim2(int y, int x, int a[][y]){ //esta função forma um vetor de 2 dimensões
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            printf("Indique o valor da entrada (%d, %d):\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}
int random1Dim(int a[], int x){ //esta função devolve um valor random do arry
    time_t t;
    srand((unsigned)time(&t));
    return a[rand()%x];
}
void ln(int a[], int x){
    for(int i=0; i<x; i++){
        printf("%f ",log((double)a[i]));
    }
}
void print1dim(int a[], int x){ //esta função imprime um array de 1 dimensão
    for(int i=0; i<x; i++){
        printf("%d ", a[i]);
    }printf("\n");
}
void task3(int a[], int x){ //esta função serve para meter a primeira metade do array em ordem crescente
    int k,l;
    for(int i=0; i<((x/2)-1); i++){
        k=min(a, x, i, (x/2));
        l=find(a,x,i,(x/2), k);
        a[l]=a[i];
        a[i]=k;
        
    }
}
int min(int a[], int x, int y, int z){ //função que permite calcular o mínimo num intervalo
    int k=a[y];
    for (int i=y; i<z; i++){
        if(a[i]<k){
            k=a[i];
        }
        else{
            continue;
        }
    }return k;
}
int find(int a[], int x, int y, int z, int w){ //devolve o índice do primeiro elemento que é igual a w
    for (int i=y; i<z; i++){
        if(a[i]==w){
            return i; 
        }
        else{
            continue;
        }
    }
}
void task4(int a[], int x){ //imprime os valores que são divisiveis por 3
    for(int i=0; i<x; i++){
        if (a[i]%3==0){
            printf("%d ", a[i]);
        }
        else{
            continue;
        }
    }printf("\n");
}
float averageArray(int a[], int x){ //faz a média de todos os elementos de um array
    float k=0;
    float *m=&k;
    for(int i=0; i<x; i++){
        *m+=a[i];
    }
    *m=(float)k/x;
    return k;
}
