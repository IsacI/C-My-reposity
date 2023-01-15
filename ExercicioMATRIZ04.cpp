/*-------------------------------------------------------------------------------------------------------------
        Barbara Bruzon - 1º semestre de Analise e Desenvolvimento de Sistemas - 09.06.2022
              Faça um programa, que receba uma matriz 10x10 de elementos inteiros e
                 localize a posição (linha e coluna) do maior elemento da matriz.
-------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>

int main() {
	int matriz[5][5], i, j, num, posicaolinha, posicaocoluna;

	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("Insira um valor inteiro (%d %d): ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	num=matriz[i][j];
	posicaocoluna=j;
	posicaolinha=i;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(num<=matriz[i][j]) {
				num=matriz[i][j];
				posicaocoluna=j;
				posicaolinha=i;
			}

		}
	}
	printf("\nO maior elemento da matriz eh = %d, que pode ser encontrado na posicao %d %d (respectivamente, linha e coluna).", num, posicaolinha, posicaocoluna);
	return 0;
}

