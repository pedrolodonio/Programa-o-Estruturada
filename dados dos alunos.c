#include <stdio.h>
#include <string.h>
int main (){
	int i,m;
	float mediaGeral;
	struct aluno{
		int matricula;
		char nome[200];
		float nota[3],media;
	};
	struct aluno aluno[10];
	
	for(i=0;i<aluno;i++){
		printf("digite a matricula do aluno\n");
		scanf("%d",&aluno[i].matricula);
		printf("digite o nome do aluno\n");
		scanf("%s",&aluno[i].nome);
	for(m=0;m<=3;m++){
		printf("digite as notas do aluno\n");
		scanf("%f",&aluno[i].nota[m]);
		aluno[i].media += aluno[i].nota[m];
	}
	aluno[i].media /=4;
	mediaGeral=aluno[i].media;
	printf("media final=%.2f\n",mediaGeral);
	}
}
