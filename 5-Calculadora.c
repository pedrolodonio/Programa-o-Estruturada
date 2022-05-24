#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float adicao(float n1,float n2){
	float res;
	res=n1+n2;
	return res;
}
float subtracao(float n1,float n2){
	float res;
	res=n1-n2;
	return res;
}
float multiplicacao(float n1,float n2){
	float res;
	res=n1*n2;
	return res;
}
float divisao(float n1,float n2){
	float res;
	res=n1/n2;
	return res;
}	
int main(void){
	float n1,n2,resultado;
	int continuar,op;
	do{
	printf("---------------------\n");
	printf("     CALCULADORA     \n");
	printf("---------------------\n");
	printf("N1=");
	scanf("%f",&n1);
	printf("OP=\n");
	printf("1-adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n");
	scanf("%d",&op);
	printf("N2=");
	scanf("%f",&n2);
	switch (op){
		case 1:
			resultado= adicao(n1,n2);
			printf("Resultado=%.2f\n",resultado);
			printf("deseja fazer outra operacao?\n 1-sim\n 2-nao\n");
			scanf("%d",&continuar);
		break;
		case 2:
			resultado= subtracao(n1,n2);
			printf("Resultado=%.2f\n",resultado);
			printf("deseja fazer outra operacao?\n 1-sim\n 2-nao\n");
			scanf("%d",&continuar);
		break;
		case 3:
			resultado= multiplicacao(n1,n2);
			printf("Resultado=%.2f\n",resultado);
			printf("deseja fazer outra operacao?\n 1-sim\n 2-nao\n");
			scanf("%d",&continuar);
		break;
		case 4:
			resultado= divisao(n1,n2);
			printf("Resultado=%.2f\n",resultado);
			printf("deseja fazer outra operacao?\n 1-sim\n 2-nao\n");
			scanf("%d",&continuar);
		default:
			printf("operacao invalida\n");
		break;
	}}while(continuar!=2);
	return 0;
	
}
	

