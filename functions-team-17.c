#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/*funções básicas */
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

void print1dim(int a[], int x){
    for(int i=0; i<x; i++){
        printf("%d ", a[i]);
    }printf("\n");
}
void print2(int x, int y, int a[x][y]){
    for (int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", a[i][j]);
        }printf("\n");
    }
}
//**********************************************************************************************


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

/*Aluno: Artur Putyato | 47948 */


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
void task3(int a[], int x){
    int k,l;
    for(int i=0; i<((x/2)-1); i++){
        k=min(a, x, i, (x/2));
        l=findv(a,x,i,(x/2), k);
        a[l]=a[i];
        a[i]=k;
        
    }
}
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

void duplicarMatriz(int x, int y, int a[x][y], int b[x][y]){
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            a[i][j]=b[i][j];
        }
    }
}

int det(int x, int y, int B[x][y]){ //Determinante de uma matriz de ordem X
    int a[x][y];
    float r;
    int w;
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

//*****************************************************************************************************************

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


void permutacao(int a[])// Função que nos dá na 1ª linha o array original e nas outras 13 as suas permutações
{
for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < 14; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[13], a[12]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[12], a[11], a[13]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[12], a[13], a[11]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[13], a[12], a[11]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[13], a[11], a[12]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[10], a[12], a[13]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[10], a[13], a[12]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[12], a[10], a[13]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[12], a[13], a[10]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[13], a[12], a[10]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[11], a[13], a[10], a[12]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[12], a[11], a[10], a[13]);
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[12], a[11], a[13], a[10]);
}

/*Aluno: Gonçalo Lopes Costa | 48243 */
int newArray(int x) //esta função lê um novo array, multiplica todos os seus componentes e devolve o valor
{
    int n[x];
    formarVectorDim1(n, x);

    int multiplicacao = n[0]; 

    for (int i = 1; i < x; i++)
    {
        multiplicacao *= n[i];
    }
    return multiplicação;
}



void imparemprimos(int v[])//Função que calcula e imprime a decomposição em números primos de todos os números impares presentes no array
{
    for(int i=0;i<14;i++)
    {
        if(v[i]%2!=0)
        {
            printf("A decomposição em primo de %i é:",v[i]);
            
            int primo=2;

            while(v[i]>1)//Não há risco de multiplicarmos por números não primos pois estes mesmos são compostos por números primos,e caso um número não seja divisível pelos segundos então também não será pelos primeiros
            {
                while(v[i]%primo==0)
                {
                    printf("%i*",primo);
                    v[i]=v[i]/primo;
                }
                primo ++;
            }
            printf("\n");
        }
    }
}



int vetorgerado(int g[]) //esta função lê um novo array 1x14
{
    for(int c=0; c<14; c++)
    {
        printf("Introduza o valor para a entrada %d.", c+1);
        scanf("%d", &g[c]);
        if(g[c] >= 8 && g[c] <= 27)
        {

        }
        else
        {
            while(g[c] < 8 || g[c] > 27)
            {
                printf("O número que introduziu não é válido.\n");
                printf("Introduza o valor para a entrada %d.", c+1);
                scanf("%d", &g[c]);
            }
        }
    }
}

void transpostagerado(int x, int y, int g[][x], int gt[][y]) //função que faz a transposta do vetor gerado de modo a que a distributiva dos vetores forme uma matriz 14x14
{
    int l, c;
    for(int l=0; l<x; l++)
    {
        for (int c=0; c<y; c++)
        {
            g[l][c] = gt[c][l];
        }
    }
}

int distributiva (int i, int j, int c, int m, int l) //esta função realiza a distributiva entre o vetor inicial e o vetor gerado
{
    int v[i][j];
    int gt[c][l];
    int gtv[i][l];
    transpostagerado(x, y, g, gt);

    for(int i=0; i<14; i++)
    {
        for(int l=0; l<14; l++)
        {
            gtv[i][l] = 0;
            for(int z=0; z<14; z++)
            {
                m += v[i][z] * gt[z][l];
                {
                    gtv[i][l] = m;
                    m = 0;
                }
            }
        }
    }
    
    for(int i=0; i<14; i++)
    {
        for(int l=0; l<14; l++)
        {
            printf("%d", gtv[i][l]);
        }
        printf("\n\n");
    } 
}

/*Aluno: Gabriel Mendes Miguéns Maria | 47922 */

//Cálculo do logaritmo (base natural) de todos os elementos no vetor;

void logaritmo(int a[], int x){ //Esta função lê todos o elementos do array calcula o logaritmo base 10 de cada um e em seguida imprime o seu logaritmo

    for (int i=0; i<x; i++){
        float log;
        log = log10(a[i]);

        printf("log10(%d) = %.3f", a[i], log);
        if(i<x-1){
            printf(", ");
        }
    }
    printf("\n");
}

