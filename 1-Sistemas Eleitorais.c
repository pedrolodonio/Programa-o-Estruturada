#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade;
		printf(">>>>Sistema Eleitoral<<<<\n");
		printf("insira a idade: ");
		scanf("%d",&idade);
			if(idade<0){
				printf("nao nasceu");
			}
			if(idade<=15){
				printf ("nao vota");
			}
			if(idade<18){
				printf("opicional");
			}
			if(idade>18){
				printf("obrigatorio");
			}
			if(idade>64){
				printf("opicional");
			}
			if(idade==41){
				printf("ganhou premio 1");
			}
			if(idade==82){
				printf("ganhou premio 2");
			}
			return 0;
		}
