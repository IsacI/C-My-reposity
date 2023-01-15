#include<stdio.h>
#include<locale.h>
#include<conio.h>
main() {
	setlocale (LC_ALL, "Portuguese");
int l,c;
float matriz[20][20],vetor[20];
for(l=0;l<20;l++){
	for(c=0;c<20;c++){
		printf("Digite os valores da Matriz [%d][%d]:",l,c);
		scanf("%f",&matriz[l][c]);
		vetor[l]=vetor[l]+matriz[l][c];
	}
}
	printf("\nSoma das linhas:\n");
for(l=0;l<20;l++){
printf("Linha %d= %.2f\n",l,vetor[l]);
}
}
