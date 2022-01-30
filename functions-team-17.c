#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
/**
 * @file functions-team-17.c
 * @brief Este ficheiro contém todas as funções que foram utilizadas no programa.
 * 
 */

/*funções básicas */
/**
 * @brief Função que forma um vector de 1 dimensão.
 * @param a Vector de 1 dimensão em que os valores serão guardados.
 * @param x Quantidade de elementos do vector a.
 */
void formarVectorDim1(int a[], int x){ 
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
/**
 * @brief Função que forma um vector de 2 dimensões.
 * @param y Número de colunas do vector.
 * @param x Números de linhas do vector.
 * @param a Vector de duas dimensões onde serão guardados valores.
 */
void formarVectorDim2(int y, int x, int a[][y]){ 
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            printf("Indique o valor da entrada (%d, %d):\n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}
/**
 * @brief Função que imprime um dado vector a.
 * @param a Vector de 1 dimensão em que os valores serão guardados.
 * @param x Quantidade de elementos do vector a.
 */

void print1dim(int a[], int x){
    for(int i=0; i<x; i++){
        printf("%d ", a[i]);
    }printf("\n");
}
/**
 * @brief Função que imprime um dado vector a.
 * @param a Vector de 1 dimensão em que os valores serão guardados.
 * @param x Números de linhas do vector.
 * @param y Números de linhas do vector.
 */
void print2(int x, int y, int a[x][y]){
    for (int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", a[i][j]);
        }printf("\n");
    }
}
/**
 * @brief Função que duplica um dado array a de 1 dimensão.
 * @param x Quantidade de elementos do vector a e b.
 * @param a Vector a já com valores guardado.
 * @param b Vector ao qual os valores de a serão copiados.
 */
void duplicarArray1dim(int x, int a[], int b[]){
    for(int i=0; i<x; i++){
        b[i]=a[i];
    }
}
/**
 * @brief Função que duplica um dado array a de 2 dimensões.
 * 
 * @param x Números de linhas dos vectores.
 * @param y Números de linhas dos vectores.
 * @param a Vector de duas dimensões onde serão guardados valores.
 * @param b Vector de duas dimensões que já tem os valores guardados. 
 */

void duplicarMatriz(int x, int y, int a[x][y], int b[x][y]){
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            a[i][j]=b[i][j];
        }
    }
}
/**
 * @brief Menú geral de opções.
 * 
 */
void menu(void){
    printf(" ________________________________________________________________________\n");
    printf("|                                                                        |\n");
    printf("|                                                                        |\n");
    printf("|                             MENÚ DE OPÇÕES                             |\n");
    printf("|                                                                        |\n");
    printf("|     1-Saír do programa;                                                |\n");
    printf("|     2-Usando o vetor inicial;                                          |\n");
    printf("|       A-Retorno de um elemento aleatório do vector;                    |\n");
    printf("|       B-Cálculo do logaritmo natural de todos os elementos do vector;  |\n");
    printf("|       C-Devolução do vector com a primeira metade dos valores ordenada |\n");
    printf("|         por ordem crescente;                                           |\n");
    printf("|       D-Valores do vector que não são divisíveis por 3;                |\n");
    printf("|       E-Média de todos os elementos do vector;                         |\n");
    printf("|       Q-saír;                                                          |\n");
    printf("|     3-Criar uma matriz (14x14) resultante da permutação do vector      |\n");
    printf("|       inicial;                                                         |\n");
    printf("|     4-Criar um novo vector e cálculo do produto interno com o vetor    |\n");
    printf("|       inicial;                                                         |\n");
    printf("|     5-Decomposição em números primos os elementos ímpares do vector    |\n");
    printf("|       inicial;                                                         |\n");
    printf("|     6-Criar um novo vector e fazer a multiplicação vetorial com        |\n");
    printf("|       vetor inicial;                                                   |\n");
    printf("|       A-Cálculo do determinante dessa matriz;                          |\n");
    printf("|       Q-saír;                                                          |\n");
    printf("|     7-Ajuda;                                                           |\n");
    printf("|                                                                        |\n");
    printf("|________________________________________________________________________|\n");

}
void submenu1(void){
    /**
     * @brief Menú usado aquando da opção 2 do menú geral.
     * 
     */

    printf(" ________________________________________________________________________\n");
    printf("|                                                                        |\n");
    printf("|                                                                        |\n");
    printf("|                             MENÚ DE OPÇÕES                             |\n");
    printf("|                                                                        |\n");
    printf("|     A-Retorno de um elemento aleatório do vector;                      |\n");
    printf("|     B-Cálculo do logaritmo natural de todos os elementos do vector;    |\n");
    printf("|     C-Devolução do vector com a primeira metade dos valores ordenada   |\n");
    printf("|       por ordem crescente;                                             |\n");
    printf("|     D-Valores do vector que não são divisíveis por 3;                  |\n");
    printf("|     E-Média de todos os elementos do vector;                           |\n");
    printf("|     Q-saír;                                                            |\n");
    printf("|                                                                        |\n");
    printf("|________________________________________________________________________|\n");

}
void submenu2(void){
    /**
     * @brief Menú usado aquando da opção 6 do menú geral.
     * 
     */

    printf(" ________________________________________________________________________\n");
    printf("|                                                                        |\n");
    printf("|                                                                        |\n");
    printf("|                             MENÚ DE OPÇÕES                             |\n");
    printf("|                                                                        |\n");
    printf("|     A-Cálculo do determinante;                                         |\n");
    printf("|     Q-saír;                                                            |\n");
    printf("|________________________________________________________________________|\n");

}





//**********************************************************************************************
/* Aluno: Tiago Borges | 47855 */

/**
 * @brief Função que devolve um elemento ao acaso de um vetor a.
 * @param a Vector de 1 dimensão passado como argumento.
 * @param x Quantidade de elementos do vector a.
 * @return Retorna um elemento inteiro do vector (int).
 */
int random1Dim(int a[], int x){ //esta função devolve um valor random do array
    time_t t;
    srand((unsigned)time(&t));
    return a[rand()%x];
}

/*Aluno: Artur Putyato | 47948 */

/**
 * @brief Função que permite localizar o elemento de menor valor.
 * 
 * @param a Vector de 1 dimensão passado como argumento,
 * @param x Quantidade de elementos do vector a.
 * @param y A posição limite-inferior do intervalo em que a função é aplicada.
 * @param z A posição seguinte à limite-superior em que a função é aplicada.
 * @return Retorna o elemento minímo determinado (int).
 */

int min(int a[], int x, int y, int z){
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
/**
 * @brief Função que identifica a posição do primeiro elemento do vector igual a um valor.
 * @param a Vector de 1 dimensão passado como argumento,
 * @param x Quantidade de elementos do vector a.
 * @param y A posição limite-inferior do intervalo em que a função é aplicada.
 * @param z A posição seguinte à limite-superior em que a função é aplicada.
 * @param w Valor que se pretende procurar no vector.
 * @return Retorna a primeira ocorrência do elemento do vector igual a w se não encontrar devolve -1 (int).
 */
int findv(int a[], int x, int y, int z, int w){
    int k=-1;
    for (int i=y; i<z; i++){
        if(a[i]==w){
            k=i; 
        }
        else{
            continue;
        }
    }
    return k;
}
/**
 * @brief Função que permite meter por ordem crescente a primeira metade dos elementos do vector.
 * 
 * @param a Vector de 1 dimensão passado como argumento.
 * @param x Quantidade de elementos do vector a.
 */
void task3(int a[], int x){
    int k,l;
    for(int i=0; i<((x/2)-1); i++){
        k=min(a, x, i, (x/2));
        l=findv(a,x,i,(x/2), k);
        a[l]=a[i];
        a[i]=k;
        
    }
}
/**
 * @brief Função imprime os valores que não são divisíveis por 3.
 * 
 * @param a Vector de 1 dimensão passado como argumento.
 * @param x Quantidade de elementos do vector a.
 */
void task4(int a[], int x){
    for(int i=0; i<x; i++){
        if (a[i]%3!=0){
            printf("%d ", a[i]);
        }
        else{
            continue;
        }
    }printf("\n");
}
/**
 * @brief Função que determina o determinante de uma matriz.
 * 
 * @param x Números de linhas dos vectores.
 * @param y Números de linhas dos vectores.
 * @param B Matriz que é passada como argumento.
 * @return Retorna o determinante que foi calculado aquando da execução do programa (int).
 */

int det(int x, int y, int B[x][y]){ //Determinante de uma matriz de ordem X
    int a[x][y];
    float r;
    int w=1;
    duplicarMatriz(x, y, a, B);

    for(int i=0;i<x;i++){
	for(int j=i+1;j<y;j++){
            r=(float)a[j][i]/a[i][i];
		for(int k=0;k<x;k++){
		   a[j][k] = a[j][k] - (r)*a[i][k];
		}
	    }
	}

    for(int i=0;i<x;i++){
        w *= a[i][i];
    }
    return w;
}

/*Aluno: Tiago Lopes Monteiro da Silva | 48138 */
/**
 * @brief Função que determina o valor médio de todos os elementos do  array.
 * 
 * @param v Vector de 1 dimensão passado como argumento.
 * @param x Quantidade de elementos do vetor v.
 * @return Média de todos os elementos do vector (float).
 */
float averagearray(int v[],int x)//Função que calcula a média de todos os valores num array
{
    int somtotal=0;
    
    for(int i=0;i<x;i++)
    {
        somtotal=somtotal+v[i];
    }
    float media=((float)somtotal)/x;

    return media;
}

/*Aluno: Gonçalo Lopes Costa | 48243 */
/**
 * @brief Função que permite imprimir as permutações de um vector a.
 * 
 * @param a Vector de 1 dimensão a que é passado como argumento.
 */
void permutacao(int a[], int x)// Função que nos dá na 1ª linha o array original e nas outras 13 as suas permutações
{
    int aux;
    formarVectorDim1(a, x);
    print1dim(a, x);
    for(int i = 1; i<x; i++)
    {
        aux = a[0];
        a[0] = a[i];
        a[i] = aux;
        print1dim(a, x);
    }
}

/*Aluno: Gonçalo Lopes Costa | 48243 */
/**
 * @brief Esta função lê um novo vector e faz o produto interno entre o vector lido e o vector inicial.
 * 
 * @param a Vector de 1 dimensão que é passado como argumento.
 * @param x Quantidade de elementos de um vector.
 * @return Resultado do produto interno entre dois vectores (int). 
 */
int newArray(int a[], int x) //esta função lê um novo array, multiplica todos os seus componentes e devolve o valor
{
    int n[x];
    formarVectorDim1(n, x);

    int produtointerno = 0; 

    for (int i = 0; i < x; i++)
    {
        produtointerno += n[i]*a[i];
    }
    return produtointerno;
}


/*Aluno: Tiago Lopes Monteiro da Silva | 48138 */
/**
 * @brief Função que calcula e imprime a decomposição em números primos de todos os números impares presentes no array
 * 
 * @param v Vector de 1 dimensão que é passado como argumento.
 * 
 * @details A função percorre todos os números do array, se um número não for par a função verifica se o número atualmente está maior que um, pois um é o único número que cumpre os requisitos para ser um número primo sem o ser; Após isso decompõe o número em nºs primos, Não há risco de multiplicar por números não primos pois estes mesmos são compostos por números primos
 */
void imparemprimos(int v[])
{   
    int error=0;

    for(int i=0;i<14;i++)
    {
        if(v[i]%2!=0)
        {
            error=1;

            printf("A decomposição em primo x 1 de %i é:",v[i]);
            
            int primo=2;


            while(v[i]>1)//
            {
                while(v[i]%primo==0)
                {
                    printf("%ix",primo);
                    v[i]=v[i]/primo;
                }
                primo ++;
            }
            printf("1");
            printf("\n");
        }
    }

    if (error==0)
    {
        printf("O vetor não tem nenhum número ímpar!\n");
    }
}



/*Aluno: João Pedro Silveiro Rainha | 48506 */
/**
 * @brief  Esta função lê un novo vetor 1x14, realiza a sua transposta e multiplica-a pelo vetor inicial formando uma matriz 14x14
 * 
 * @param x Quantidade de elementos do vector de 1 dimensão.
 * @param a Vector de 1 dimensão com valores previamente guardado.
 * @param b Vector de 2 dimensões que resultará da multiplicação vetorial entre dois vetores.
 */

void matriz(int x, int a[x], int b[x][x]) 
{
    int g[x];
    formarVectorDim1(g, x);

    
    for(int l=0; l<x; l++)
    {
        for(int c=0; c<x; c++)
        {
            b[l][c]=g[l]*a[c];
        }  
    }
    
    print2(x,x,b);
}



/*Aluno: Gabriel Mendes Miguéns Maria | 47922 */


/**
 * @brief Função que efetua o cálculo do logaritmo (base natural) de todos os elementos no vetor
 * 
 * @param a Vector de 1 dimensão passado como argumento.
 * @param x Quantidade de elementos do vector.
 */

void logaritmo(int a[], int x){ //Esta função lê todos o elementos do array calcula o logaritmo base e de cada um e em seguida imprime o seu logaritmo

    for (int i=0; i<x; i++){
        float log1;
        log1 = log(a[i]);

        printf("ln(%d) = %.3f ", a[i], log1);
        if(i<x-1){
            printf(", ");
        }
    }
    printf("\n");
}

//Imprime ajuda sobre o programa;
//Entrada 7 no menu
/**
 * @brief Função que Imprime ajuda sobre o programa;
 * 
 */

void ajuda(void){

    printf("------------------------------------AJUDA------------------------------------\n");
    printf("Após ter introduzido os 14 números, este programa tem como objetivo\nrealizar diversas funções com esses mesmos números, funções estas que\npodem ser executadas de forma simples no menu do programa. Para um\nmelhor entendimento do menu e melhor execução do mesmo leia as seguintes\ninstruções:\n   ·Prima '1' para saír do programa\n   ·Prima '2' para usar o primeiro vetor\n   Caso tenha primido '2', prima 'A' obter um valor aleatório presente no vetor anteriormente\n\tinserido;\n   ·Caso tenha primido '2', prima 'B' para fazer o cálculo do logaritmo de todos os valores presentes\n\tno vetor;\n   ·Caso tenha primido '2', prima 'C' para obter a devolução do vetor, em que a primeira metade dos\n\tvalores desse mesmo vetor estão ordenados por ordem crescente;\n   ·Caso tenha primido '2', prima 'D' para obter a devolução dos valores do vetor que não são\n\tdivisíveis por três;\n   ·Caso tenha primido '2', prima 'E' para fazer o cálculo da média de todos os elementos no vetor;\n   ·Caso tenha primido '2', prima 'Q' para poder fazer operações com outros vetores;\n   ·Prima '3' para obter uma matriz 14x14 em que cada linha é composta pelo\n\tvetor lido na primeira linha e por permutações dos seus valores que\n\teram inseridos nas outras linhas;\n   ·Prima '4' para fazer o cálculo do produto inteirno com o vetor inicial;\n   ·Prima '5' para decompor em números primos os números ímpares inseridos\n\tanteriormente;\n   ·Prima '6' para gerar uma matriz 1X14 na qual terá de inserir novamente\n\tos números e a essa matriz será multiplicada a matriz iniciar desta \n\tforma, depois de ter introduzidos os números, será-lhe apresentado no\n\tecrã a matriz resultante desse mesmo produto;\n   ·Se tiver primido '6' prima 'A' para fazer o cálculo do determinante da matriz gerada\n\tna entrada '6';\n   ·Caso tenha primido '6', prima 'Q'para deixar de usar o novo vetor e poder usar vetores diferentes;\n   ·Prima '7' para aceder à página de ajuda.\n\t");
    printf("\n-----------------------------------------------------------------------------\n");

}