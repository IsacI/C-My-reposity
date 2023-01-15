#include<stdio.h>
#include<locale.h>
#include<conio.h>
main() {
	setlocale (LC_ALL, "Portuguese");
int l=0, c=0;
float matriz[4][4],soma;
for(l=0;l<4;l++){
	for(c=0;c<4;c++){
		printf("Digite um valor para a matrix [%d][%d] :\n",l,c);
		scanf("%f",&matriz[l][c]);
	}
}
soma = matriz[0][0]+matriz[1][1]+matriz[2][2]+matriz[3][3];
printf("\nOs valores da Matriz principal são:%.2f, %.2f, %.2f, %.2f",matriz[0][0],matriz[1][1],matriz[2][2],matriz[3][3]);
printf("\n\nA soma dos valores da Matriz principal é: %.2f",soma);
}
