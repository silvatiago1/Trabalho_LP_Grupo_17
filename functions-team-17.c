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
void print1dim(int a[], int x){
    for(int i=0; i<x; i++){
        printf("%d ", a[i]);
    }printf("\n");
}

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
    for (int i=y; i<z; i++){
        if(a[i]==w){
            return i; 
        }
        else{
            continue;
        }
    }
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
        if (a[i]%3==0){
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

void print2(int x, int y, int a[x][y]){
    for (int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ", a[i][j]);
        }printf("\n");
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
int newArray(int n[x]) //esta função lê um novo array, multiplica todos os seus componentes e devolve o valor
{
    for(int i = 0; i < x;i++)
    {
        printf("Indique o valor para a entrada %d do novo array.", i+1);
        scanf("%d", &n[i]);
        if(n[i] >= 8 && n[i] <= 27)// Caso o utilizador introduza o nº dentro dos parametros
        {
            continue;
        }
        else
        {
            while(n[i] < 8 || n[i] > 27)// Caso o utilizador introduza um nº fora dos parametros
            {
                printf("O número que introduziu não é válido. (Deve de estar compreendido entre 8 e 27!)\n");
                printf("Volte a introduzir o valor para a entrada %d do novo array.", i+1);
                scanf("%d", &n[i]);
            }
        }
    }
    int multiplicacao = n[0]; //vai usar como valor base o primeiro valor do novo array

    for (int i = 1; i < 14; i++)
    {
        multiplicacao *= n[i];
    }
    
    return multiplicacao;
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
