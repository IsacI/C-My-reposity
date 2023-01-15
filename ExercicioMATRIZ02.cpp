#include<stdio.h>
#include<stdlib.h>
int main() {
	float matriz[3][3], transposta[3][3];
	int i, j;
	for (i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("Insira um valor inteiro (%d %d): ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	system("cls");
	printf("-----MATRIZ-----\n");
	for (i=0; i<3; i++) {
		printf("- ");
		for(j=0; j<3; j++) {
			printf("%.2f ", matriz[i][j]);
		}
		printf("-\n");
	}

	for (j=0; j<3; j++) {
		for(i=0; i<3; i++) {
			transposta[j][i]=matriz[i][j];
		}
	}

	printf("\n----TRANSPOSTA----\n");
	for (i=0; i<3; i++) {
		printf("- ");
		for(j=0; j<3; j++) {
			printf("%.2f ", transposta[i][j]);
		}
		printf("-\n");
	}
}
