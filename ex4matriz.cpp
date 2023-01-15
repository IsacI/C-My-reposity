#include<stdio.h>
#include<locale.h>
#include<conio.h>
main() {
	setlocale (LC_ALL, "Portuguese");
	int ma[10][10];
	int I, J, maiorma=0;
	for(I = 0; I < 10; I++) {
		for(J = 0; J < 10; J++) {
			printf("MA[%d][%d] : ", I, J);
			scanf("%d", &ma[I][J]);
			if(maiorma==0) {

				maiorma = ma[I][J];
			}
			if(maiorma<ma[I][J]) {
				maiorma = ma[I][J];
			}
		}
	}
	for(I = 0; I < 10; I++) {
		for(J = 0; J < 10; J++) {
			if(ma[I][J]==maiorma)	{
				printf("A posiçao do maior elemento da matriz é: [%d][%d].\nE o valor deste maior elemento é: %d.",I,J,maiorma);
			}
		}
	}
}

