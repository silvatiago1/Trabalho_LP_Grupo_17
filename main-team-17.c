#include<stdio.h>
#include"functions-team-17.h"
#include<locale.h> //este header permite meter acentos e outras coisas da língua portuguesa
#include<string.h>
int main(int argc,char *argv[]){
    int x=14;
    int a[x];
    int a2dim[x][x];
    int op;
    if(argc == 2 && strcmp(argv[1], "--help")==0){
        printf("Ajuda será disponibilizada em breve\n");
    }
    formarVectorDim1(a,x);

    printf("1-Retorno de um elemento aleatório desse vector\n2-Cálculo do logaritmo natural de todos os elementos do vector\n3-Devolução do vetor com a primeira metade dos valores ordenada por ordem crescente\n4-Valores do vector que não sáo divisíveis por 3\n5-Média de todos os elementos do vector\n6-...\n");
    scanf("%d", &op);
    while (op!=0){//Returnar ao menu se o utilizador não decidir saír
    switch (op)
    {
    case 0:
        printf("Escolheu saír do menu.");
        break;
    case 1:
        printf("O elemento aleatório é:\t %d\n",random1Dim(a,14));
        break;
    case 2:
        //ln(a, 14);
        break;
    case 3:
        task3(a, 14);
        print1dim(a,14);
        break;
    case 4:
        //task4(a, 14);
        break;
    case 5:
        printf("O valor médio de todos os elementos do vector é %f\n",averagearray(a,14));
        break;
    case 8:
        printf("Apresentação da decomposição em números primos dos números impares no vetor inicial\n");
        imparemprimos(a);
    case 10:
        printf("Determinante = %d\n", det(14,14, a2dim));
    default:
        break;
    }
    printf("1-Retorno de um elemento aleatório desse vector\n2-Cálculo do logaritmo natural de todos os elementos do vector\n3-Devolução do vetor com a primeira metade dos valores ordenada por ordem crescente\n4-Valores do vector que não sáo divisíveis por 3\n5-Média de todos os elementos do vector\n6-...\n");
    scanf("%d", &op);
    }


    return 0;
}
