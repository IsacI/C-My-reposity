#include<stdio.h>
#include<stdlib.h>
int main(){
	float matriz[4][4];
	int i, j;
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Insira um valor inteiro (%d %d): ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	printf("\n\nA diagonal principal dessa matriz eh composta pelos numeros %.2f, %.2f, %.2f, e %.2f.\nLogo, a soma dos elementos da diagonal principal eh %.2f", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3], matriz[0][0]+matriz[1][1]+matriz[2][2]+matriz[3][3]);
}
