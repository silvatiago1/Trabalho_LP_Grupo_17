@page workflow Fluxo do programa − Descrição do fluxo
# O fluxo do programa.
Inicialmente, será pedido ao utilizador 14 valores para preencher um vector de uma dimensão com valores compreendidos entre "8 e 27". Caso será passado um valor que não esteja no intervalo referido, então será re-solicitado para substituir o valor em causa. Após o preenchimento, será impresso um menú com opções; no caso em que utilizador pretenda saír do programa, deverá primir "1". No caso de ser escolhido a opção "2" ou "6", será impresso um submenú com as opções possíveis.
# Detalhes do fluxo do programa.

                                                        Imprime("Bem-vindo")
                                                                |
                                                                |
                                                                |
                                                                |
                                                                v
                            Imprime("Indique as entradas de um vector de 14 posições para começar!")------------------------> formarVectorDim1(a,14)
                                                                                                                                        |
                                                                                                                                        |
                                                                                                                                        |
                                                                                                                                        v
                                                                                                                            Introdução da variável i=0
                                                                ----------------------------------------Não----------------------------i<14?<-------------
                                                                |                                                                        \               |
                                                                v                                                                         \              |
                        ---------------->------------------->menu()<-------------                                                          \             |
                        |                                       |                |                                                          |Sim         |
                        |                                       |                |                                                          v            |
                        |                                       v                |                                                      input valor a[i]--
                        |                                 imprimir menu          |                                                         i++ 
                        ^                                       |                |
                        |                                       v                ------------------------<-------------------------------------------<----------
                        |                                    ler op                                                                                            |
                        |                                       |                                                                                              |
                        |                           verdade     v                                                                                              |
     -------------------|-------------------------------------caso 1                                                                                           |
     |                  |                                       |                                                                                              |
     |                  |                                       |                                                                                              |
     |                  ^                                 falso |                                                                                              |
     |                  |                                       |                                                                                              |
     |             falso|                                       |                                                                                              |
     |                  |                           verdade     v        falso                                                                                 |
     |          se op2 diferente de 'Q' <---------------------caso 2 --------------------------------------------------------------------------------          |
     |                  |                    |                                                                                                      |          |
     |           verdade|                    |                                                                                                      |          |
     |                  v                    |                                                                                                      |          |
     |              submenu1()               ----------------------------<-------------------------------------------------------<----------        |          |
     |                  |                                                                                                        |         |        |          |
     |                  v                                                                                                        |         |        |          |
     |         imprimir submenu                                                                                                  |         |        |          |
     |                  |                                                                                                        |         |        |          |
     |                  v                                                                                                        ^         |        |          |
     |              ler op2                                                                                                      |         |        |          |
     |                  |        não                 não               não                não               não              não |         |        |          |
     |           op2 igual 'A'?------>op2 igual'B'?----->op2 igual'C'?----->op2 igual'D'?---->op2 igual'E'?---->op2 igual'Q'?-----         |        |          |
     |                  |                    |                    |                 |                 |                 |                  |        |          |
     |                 sim                  sim                  sim               sim               sim               sim                 |        |          |
     |                  |                    |                    |                 |                 |                 ----------->-------+--->----+------->--^
     |                  v                    v                    v                 v                 v                                    |        |          |
     |          random1Dim(a,14)   logaritmo(a,14)  duplicarArray1dim(14,a,b)    task4(a,14)     averagearray(a,14)                        |        |          |
     |                  |                    |                    |                 |                 |                                    |        |          |
     |                  |                    |                    |                 |                 v                                    |        |          |
     |                  |                    |                    |                 |         introdução somtotal=0                        |        |          |
     |                  |                    |                    |                 |                 |                                    ^        v          ^
     |                  |                    |                    |                 |                 v                                    |        |          |
     |                  |                    |                    |                 |            introdução i=0                            |        |          |
     |                  |                    |                    |                 |                 |                                    |        |          |
     |                  |                    |                    |                 |                 v                                    |        |          |
     |                  |                    |                    |                 |         ------>i<14?---não-------                    |        |          |
     |                  |                    |                    |                 |         |    sim|               |                    |        |          |
     |                  |                    |                    |           introdução i=0  |       v               |                    |        |          |
     |                  |                    |                    |                 |         -somtotal=somtotal+a[i] |                    |        |          |
     |                  |                    |                    |                 |                         --------|                    |        |          |
     |                  |                    |                    |                 |                         |                            |        |          |
     |                  |                    |                    |                 v                         |                            |        |          |
     |                  |                    v                    v        ------> i<14?----não--------       v                            |        |          |
     |                  |             introdução i=0        task3(b, 14);  |    sim |                 | introdução media=somtotal/14       |        |          |
     |                  |                    |                    |        |        v                 |       |                            |        |          |
     |                  |                    |             introdução i=0  |se a[i] não é divisível 3 |       |                            |        |          |
     |                  |                    |                    |        |        |sim              |       v                            |        |          |
     |                  |                    |                    |        |        v                 |  imprimir(media)                   |        |          |
     |                  |                    |                    |        |     imprimir a[i]        |       |                            |        |          |
     |                  |                    |                    |        --------i++                |       |                            |        |          |
     |                  |                    |                    |                    ----------------       |                            |        |          |
     |                  |                    |     ------------> i<8?---não--------    |                      |                            |        |          |
     |                  |                    |     |              |sim            |    |                      |                            |        |          |
     |                  |                    |     |              |               |    |                      |                            |        |          |
     |                  |                    |     |              v               |    |                      |                            |        |          |
     |                  |                    |     |  encontrar mínimo entre i e 7|    |                      |                            |        |          |
     |                  |                    |     |  substituir min(b) por b[i]  |    |                      |                            |        |          |
     |                  |                    |     --------------i++              |    |                      |                            |        |          |
     |                  |                    |                    -----------------    |                      |                            |        |          | 
     |                  |                    |                    |                    |                      |                            |        |          |
     |                  |          -----> i<14? --não----         |                    |                      |                            |        |          |
     |                  |          |         | sim      |         |                    |                      |                            |        |          |
     |                  |          |         v          |         v                    |                      |                            |        |          |
     |                  |          ---imprimir ln(a[i]) |    print1dim(b,14);          |                      |                            |        |          ^
     |                  |                   i++         |         |                    |                      |                            |        |          |
     |                  |                    ___________|         |                    |                      |                            |        |          |
     |                  |                   |                     |                    |                      |                            |        |          |
     |                  |                   |                     |                    |                      |                            |        |          |
     |                  |                   |                     |                    |                      |                            |        |          |
     |                  v                   |                     |                    |                      |                            |        |          |
     |       imprime(valor aleatório)       |                     |                    |                      |                            |        |          |
     |                  v---------->--------v----------->---------v----------->--------v------------>---------v------------->--------------|        |          |
     |                                                                                                                                              |          |
     |                  ----------------------------            -------------------------------------------------------------------------------------          |
     |                  |                          |            |                                                                                              |
     |                  v                          |            |                                                ---------introdução i=0----------|            |
     |       imprimir(newArray(a,14))              |      falso |                                                |                 -----------> i<14?---não--  |
     |                  |                          |            |                                          permutacao(a, 14)       |              |sim      |  |
     |                  v                          |            |                                                |                 |              |         |  |
     |     introdução de um array n[14]            |            v  verdade                                       |                 |              v         |  |
     |                  |                          |         caso 3------->imprimir(O seu array e as suas 13 permutações é:)       |   trocar a[0] com aa[i]|  |
     |                  |                          |            |                                        --------------------      |             i++        |  |
     |                  |                          |            |                                        |                  |      |              |         |  |
     |                  |                          |            |                                       i++                 |      |              |         |  |
     |                  |                          |            |                                        |                  |      |              |         |  |
     |                  v                          |            |                                        v                  |      |              |         |  |
     |       formarVectorDim1(n,14)                |            |              --introdução da variável i=0-->i<14?-não---------   ----------------         |  |
     |                  |                          |            |              |                            sim|            |   |---------------------      ->-|
     |                  |                          |            |              |                               |            |                        |         |
     |                  v                          |      falso | introdução da variável error=0               v        primo++<--a[i]=a[i]/primo    |         |
     |      Introdução da variável i=0             |            |              ^             a[i]não é divisível por primo?            ^             v         |
     |      ----não---i<14? <-------------         |verdade     v              |                            sim|                       |         print(1)      |
     |      |           |sim             |         ----------caso 4   imparemprimos(a)  error=1-----------------           imprimir(a[i]x)           |         |
     |      |           v                |                      |              ^           |                                           ^             v falso   |
     |      |  input valor n[i]          |                      |              |           v                                           |         error=0?----->|
     |      |          i++ ---------------                falso |              |  imprimir(A decomposição em primo de a[i])           sim      erdade|         | 
     |      ------------                                        |              |   |                                                   |             |         |
     |                 |                                        |              |   -->introdução da variável primo=2--> a[i] é divisível por primo?  |         |
     | introdução da variável produtointerno=0                  v  verdade     |                                                                     |         ^
     |                 |                                     caso 5 ---->imprimir(decomposição em nºs primos os impares do vector)                   |         |
     |                 |                                        |                                                                                    v         |
     |                 v                                        |                                            imprimir(O vetor não tem nenhum número ímpar!)--->|
     |     introdução da variável i=0                           |                                                                                              |
     |   --------------> i<14?----------------não-----          |                                                                                              |
     |   |             |sim                          |     falso|                                                                                              |
     |   |             v                             |          |                                                                                              |
     |   |produtointerno é incrementado em n[i]*a[i] |          v        falso        falso                                                                    |
     |   ---------------i++                          |        caso 6---------->caso 7------->default-->imprimir(Opção inválida)-------------->-----------------+
     |                   -----------------------------          |                 |verdade                                                                     |
     |                   |                                      |                 v                                                                            |
     |                   |                                      |         ajuda()-->imprimir(ajuda)                                                            ^
     |                   |                                      |                       |                                                                      |
     |                   v                                      |                       v                                                                      |
     |      imprimir(produto interno)---------------------------|----------->------------------->----------------------->-------------------------->-----------+
     |                                                 ----------                                                                                              |
     |                                                 |                                                                                                       |
     |                                                 |                                                                                                       |
     |                                                 |                                   ---------------k++                                                  |
     |                                                 | verdade                           | a[j][k]=a[j][k]-(r)*a[i][k]     --------------                    |
     |                                                 |                                   |               ^                 |            |                    |
     |                                                 v                                   |               | verdade         |            v                    |
     |                                             matriz(14, a, a2dim)                    ------------>k<14?---falso--------|introdução da variável i=0       |
     |                                                 |                                         introdução da variável k=0 ||  ---------i<14?                 |
     |                                                 |                                                   ^                ||  |         | verdade            |
     |                                                 |                                                   |                ||  |         |                    |
     |                                                 v                                                  j++ -----------   ||  |         |                    |
     |                                         formarVectorDim1(g,14)                                      |            |   ||  |         v                    |
     |                                                 |                                             r=a[j][i]/a[i][i]  |   ||  |      w=w*a[i][i]             |
     |                                                 v                                                   ^            |   ||  |                              |
     |                                         introdução da variável l=0                                  | verdade    |   ||  -----------                    |
     |                                                 |                                    ---<--falso--j<14? <--------v---||            | retorno w          |
     |                                                 v                                    |   introdução da variável j=i+1 |            v                    |
     |                                     ---------> l<14?--------falso--------------      v              ^                 |imprimir(det(14,14, a2dim))      |
     |                                     |           |verdade                      |      |              | verdade         |                                 |
     |                                    l++          v                             |      ----->-(i++)-->i<14?----falso-----                                 |
     |                                     |    introdução da variável c=0           |          introdução da variável i=0                                     |
     |                                     |           |                             |                     ^                                                   |
     |                                     |           v                             |                     |                                                   |
     |                                     |                                         |                    w=1                                                  |
     |                                     ----falso--c<14?<---------------------    |          duplicarmatriz(14,14,a, B)                                     |
     |                                                 |verdade                 |    |                     ^                                                   |
     |                                                 v                        |    |                     |                                                   |
     |                                         a2dim[l][c]=g[l]*a[c]            |    |              det(14,14, a2dim)                                          |
     |                                                 |                        |    |                     ^                                                   |
     |                                                 v                        |    |                     |                                                   |
     |                                                c++------------------------    |                     |verdade                                            |
     |                                                            --------------------                     |        falso                                      |
     |                                                            |                                 op2 igual a A--------->op igual a Q                        |
     |                                                            v                                        ^                    |                              |
     |                                                         print(a2dim)                                |                    |                              |
     |                                                            |                                        |              verdade/ falso                       |
     |                                                            v                                        |                    |                              |
     |                                                         submenu2()--------->imprime submenu----->ler op2                 --------------------------------
     |
     ----------------------------------------------------------------------
                                                                          |
                                                                          v
                                                                fim de execução do  programa  

                                                                                                                              
