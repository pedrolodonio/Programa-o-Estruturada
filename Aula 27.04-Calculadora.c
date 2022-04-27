#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2;
	char op;
	printf("---------------------\n");
	printf("CALCULADORA\n");
	printf("---------------------\n");
	printf("N1=");
	scanf("%f",&n1);
	printf("N2=");
	scanf("%f",&n2);
	printf("OP=");
	printf("a-adicao,s-subtracao,m-multiplicacao,d-divisao\n");
	scanf(" %c",&op);
	switch (op){
		case 'a':
		printf("Resultado=%.2f",n1+n2);
		break;
		case 's':
		printf("Resultado=%.2f",n1-n2);
		break;
		case 'm':
		printf("Resultado=%.2f",n1*n2);
		break;
		case 'd':
		printf("Resultado=%.2f",n1/n2);
		break;
		default:
			printf("operação invalida");
	}
	return 0;
}
