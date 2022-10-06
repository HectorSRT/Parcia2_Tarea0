#include <stdio.h>
#include <stdlib.h>

void leer_matriz(int N, int M,int matriz[N][M]);
void suma_matriz(int N, int M, int matriz[N][M], int matRes[N][M]);
void imprime_matriz(int N, int M, int matRes[N][M]);

int main()
{
    int N,M;
    int matriz[100][100];
    int matRes[100][100];
    scanf("%d%d", &N,&M);
    leer_matriz(N,M,matriz);
    suma_matriz(N,M,matriz,matRes);
    imprime_matriz(N,M,matRes);
    return 0;
}

void leer_matriz(int N, int M,int matriz[N][M]){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
}

void suma_matriz(int N, int M, int matriz[N][M], int matRes[N][M]){
    int suma=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            suma=suma+matriz[i][j]+matriz[i][j+1]+matriz[i+1][j]+matriz[i-1][j]+matriz[i][j-1];
            matRes[i][j]=suma;
            suma=0;
        }
        suma=0;
    }
}

void imprime_matriz(int N, int M, int matRes[N][M]){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ", matRes[i][j]);
        }
        printf("\n");
    }
}
