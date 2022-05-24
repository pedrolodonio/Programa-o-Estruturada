#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	printf(">>>>Sistema Eleitoral<<<<\n");
	printf("insira a idade: ");
	scanf("%d",&idade);
			if(idade<0){
				printf("nao nasceu\n");
			}else
			if(idade<=15){
				printf ("nao vota\n");
			}else
			if(idade<18){
				printf("opicional\n");
			}else
			if(idade>18 && idade!=41 && idade!=82){
				printf("obrigatorio\n");}
			else
			if(idade>64 && idade!=82){
				printf("opicional\n");
			}
			if(idade==41){
				printf("ganhou premio 1\n");
			}else
			if(idade==82){
				printf("ganhou premio 2\n");
			}
			return 0;
		}
