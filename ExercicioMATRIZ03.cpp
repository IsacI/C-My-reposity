/*-------------------------------------------------------------------------------------------------------------
        Barbara Bruzon - 1º semestre de Analise e Desenvolvimento de Sistemas - 09.06.2022
              Faça um programa, que leia os dados de uma matriz de 4 linhas e 4 colunas, 
       composta de elementos reais, e calcule a soma dos elementos da diagonal principal da matriz.
-------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int matriz[20][20], vetor[20], i, j;

	for(i=0; i<20; i++) {
		for(j=0; j<20; j++) {
			printf("Insira um valor inteiro (%d %d): ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<20; i++) {
		for(j=0; j<20; j++) {
			vetor[i]=vetor[i]+matriz[i][j];
		}
	}
	for(i=0; i<20; i++) {
		printf("Linha %d: %d.\n", i+1, vetor[i]);

	}
}
