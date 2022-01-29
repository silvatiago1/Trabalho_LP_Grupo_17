#include<stdio.h>
#include"functions-team-17.h"
#include<locale.h> //este header permite meter acentos e outras coisas da língua portuguesa
#include<string.h>
#include<stdlib.h>
/**
 * @file functions-team-17.c
 */

int main(int argc,char *argv[]){
    system("clear");

    if(argc == 2 && strcmp(argv[1], "--help")==0){
        printf("Ajuda será disponibilizada em breve\n");
        
    }
    int a[14], b[14]; ///vector a é o vector que é requerido inicialmente, o vector b é um vector suplementar
    int a2dim[14][14]; ///matriz de 2 dimensões
    char op; ///variável usada no menú geral 
    char op2='A'; ///variável usada nos sub-menús


    printf("Seja bem-vindo!\n \n");
    printf("Indique as entradas de um vector de 14 posições para começar!\n");
    formarVectorDim1(a,14);
    repeat:
    menu();
    scanf(" %c", &op);
    while (op!='1'){//Returnar ao menu se o utilizador não decidir saír
    switch (op)
    {
    case '1':
        goto sair;
        break;
    case '2':
        printf("O vector que será usado é o que foi formado anteriormente.\n");
    while(op2!='Q'){
        submenu1();
        scanf(" %c", &op2);
        if(op2== 'A'){
            printf("O elemento aleatório é:\t %d\n",random1Dim(a,14));
        }
        else if (op2== 'B'){
            logaritmo(a, 14);
        }
        else if (op2== 'C'){
            duplicarArray1dim(14, a, b);
            task3(b, 14);
            print1dim(b,14);
        }
        else if (op2== 'D'){
            task4(a, 14);
        }
        else if (op2== 'E'){
            printf("O valor médio de todos os elementos do vector é %f\n",averagearray(a,14));
        }
        else if (op2=='Q'){
            goto repeat;
        }
        }
    
    break;
    
    case '3':
        printf("O seu array e as suas 13 permutações é:\n");
        permutacao(a, 14);
        break;
    case '4':
        printf("O produto interno dos dois vetores é %d.\n", newArray(a,14));
        break;
    case '5':
        printf("Apresentação da decomposição em números primos dos números impares no vetor inicial\n");
        imparemprimos(a);
        break;
    case '6':
        printf("A matriz 14x14 resultante da multiplicação dos dois vetores é:\n");
        matriz(14, a, a2dim);
        submenu2();
        scanf(" %c", &op2);
        if(op2=='A'){
            printf("Determinante = %d\n", det(14,14, a2dim)); 
        }
        else if(op2=='Q'){
            goto repeat;
        }
        break;
    case '7':
        ajuda();
        break;
    
    default:
        printf("\nOpção inválida!\n");
        break;
    }
    goto repeat; 
    }
    sair: 
        printf("\nAté breve!\n");
    return 0;
}
