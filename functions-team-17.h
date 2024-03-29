/**
 * @file functions-team-17.h
 * @brief Este ficheiro contém as assinaturas de todas as funções que foram utilizadas no programa.
 * 
 */

void formarVectorDim1(int a[], int x); //função suplementar para formar arrays de 1 dimensão
void formarVectorDim2(int y, int x, int a[][y]); //função suplementar para formar arrays de 2 dimensões
void duplicarArray1dim(int x, int a[], int b[]); //função suplementar que permite duplicar arrays de 1 dimensão
int random1Dim(int a[], int x); //função que devolve elementos pseudo-random de um array
void print1dim(int a[], int x); //função suplementar para imprimir arrays de uma dimensão
int min(int a[], int x, int y, int z); //idevolve o valor minimo no intervalo y a z-1
int findv(int a[], int x, int y, int z, int w); //função suplementar para encontrar a primeira ocorrência de um elemento igual a w
void task3(int a[], int x); //omprime o array com metade dos elementos por ordem crescente
float averagearray(int v[],int x);//função que retorna a média de todos os elementos de um array
void imparemprimos(int v[]); //função que imprime os elementos de um array decompostos em números primos
void permutacao(int a[], int x); //função que forma uma matriz 14x14 que resulta da permutação de elementos de um array passado como argumento
int newArray(int a[], int x); //função que devolve a multiplicação de todos os elementos de um array
int det(int x, int y, int B[x][y]); //calcula o determinante de qualquer matriz quadrada
void duplicarMatriz(int x, int y, int a[x][y], int b[x][y]); //clona uma matriz
void print2(int x, int y, int a[x][y]); //imprime uma matriz
void logaritmo(int a[], int x); //calcula e imprime o logaritmo de cada elemento do array.
void ajuda(void); //imprime ajuda sobre o menu e o que cada entrada do mesmo faz.
void matriz(int x, int a[x], int b[x][x]); //função que criar uma matriz por multiplicação vetorial de um novo vetor com o inicial
void task4(int a[], int x); //função que imprime todos os elementos de um array que não são divisíveis por 3
void menu(void);//imprime o menú geral
void submenu2(void);//imprime um submenú 
void submenu1(void);//imprime um submenú 