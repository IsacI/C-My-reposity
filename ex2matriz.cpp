#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main() {
	setlocale (LC_ALL, "Portuguese");
int l,c;
float matrizn[3][3], matrizt[3][3];
for(l=0;l<3;l++){
	for(c=0;c<3;c++){
		printf("Digite os valores para a Matriz[%d][%d]:",l,c);
		scanf("%f",&matrizn[l][c]);
		matrizt[c][l] = matrizn[l][c];
		
	}
}
printf("---------MATRIZ---------\n");

	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizn[0][c]);
}printf("-\n");
	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizn[1][c]);
}printf("-\n");
	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizn[2][c]);
}	printf("-\n\n");

printf("-----Transposta-----\n");

	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizt[0][c]);
}printf("-\n");
	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizt[1][c]);
}printf("-\n");
	printf("- ");
	for(c=0;c<3;c++){
printf("%.2f   ",matrizt[2][c]);
}	printf("-\n");
}


