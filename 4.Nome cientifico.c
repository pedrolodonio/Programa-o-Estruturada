#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (void){
	char nome[50];
	int i=0,tamanho=0,espaco=0;
	printf("Digite o Nome: ");
	scanf("%[^\n]s",nome);
	
	tamanho=strlen(nome);
	
	for(i=0;i<tamanho;i++){
		if(nome[i]==' '){
			espaco=i;
		}
	}
	for(i=espaco+1;i<tamanho;i++){
		printf("%c",toupper(nome[i]));
	}
	
	printf(",");
	printf("%c.",toupper(nome[0]));
	for(i=tamanho-1;i>=0;i--){
		if(nome[i]==' ')
		printf("%c;",toupper(nome[i+1]));
	}}
	
