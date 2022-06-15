//Nome:Pedro Xavier Lod�nio    Matr�cula:UC21200125
//Nome:Caio Oliveira Marques   Matricula:UC21103716
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define TAM_CIDADE 120
#define MAX_PRE 30
#define MAX_JOGOS 450

void pedeCidade(char cidade);
char presidente(char nome[MAX_PRE]);
char lePresidente(char nome[MAX_PRE]);
int pedeIdJogo(int idsJogos[MAX_JOGOS], int quantidadeJogosRegistrados);
int jaFoiRegistrado(int idsJogos[MAX_JOGOS], int idJogo, int quantidadeJogosRegistrados);
float pedeValorArrecadado();

int main(void){
	int i,opcao,quantidadeJogosRegistrados = 0,idJogosFornecidos[MAX_JOGOS];
	char nomePresidente[MAX_PRE],consulta[TAM_CIDADE];
	int quantidadeVezes;
	
	presidente(nomePresidente);

		
	struct jogos{
		int idJogo;
		float valorArrecadado;
		char cidade[TAM_CIDADE];
	};
	
	struct jogos jogos[MAX_JOGOS];
	
	
	while(1){
		do{
			
			// entrada da escolha de uma das op��es do menu pelo usu�rio
			printf("O que deseja fazer?\n\n 1-Registrar novo jogo\n 2-Consultar jogos cadastrados\n 3-Consultar cidades\n 4-encerrar o programa\n");
			scanf("%d",&opcao);
			fflush(stdin);
		}while(opcao<1 || opcao>4);
	
		system("CLS");
		switch(opcao){
		case 1:
			// a primeira op��o registra um jogo
			jogos[quantidadeJogosRegistrados].idJogo = pedeIdJogo(idJogosFornecidos, quantidadeJogosRegistrados);
			idJogosFornecidos[quantidadeJogosRegistrados] = jogos[quantidadeJogosRegistrados].idJogo;
			
			quantidadeVezes = 0;
			do{
				if(quantidadeVezes >= 1){
					system("CLS");
					printf("ERRO  tente novamente...\n");
				}
				printf("Cidade onde acontecera o jogo: ");
				scanf("%[^\n]s",&jogos[quantidadeJogosRegistrados].cidade);
				fflush(stdin);	
				quantidadeVezes++;
			} while(strcmp(jogos[quantidadeJogosRegistrados].cidade, " ") == 0);
			
			jogos[quantidadeJogosRegistrados].valorArrecadado = pedeValorArrecadado();
			quantidadeJogosRegistrados++;
			
			system("CLS");
			break;
		case 2:
			// a segunda op��o exibe os jogos j� registrados
			lePresidente(nomePresidente);
			for(i=0;i<quantidadeJogosRegistrados;i++){
				printf("%d\t",jogos[i].idJogo);
				printf("%s\t",jogos[i].cidade);
				printf("R$ %.2f\t\n",jogos[i].valorArrecadado);
			}
			printf("\n\n");
		break;
		case 3:
			// a terceira op��o � uma busca por jogos pela cidade.
			
			printf("digite a cidade que deseja buscar:");
			scanf("%[^\n]s",&consulta);
			fflush(stdin);
			
			quantidadeVezes = 0;
			for(i=0;i<quantidadeJogosRegistrados;i++){
				int retorno= strcmp(jogos[i].cidade,consulta);
				if(retorno==0){
					quantidadeVezes++;
 					printf("%d\t",jogos[i].idJogo);
					printf("%s\t",jogos[i].cidade);
					printf("R$ %.2f\t\n",jogos[i].valorArrecadado);
				}		 
			}	
			
			if(quantidadeVezes == 0) printf("N�o ocorreu nenhum jogo nessa cidade.");
			printf("\n\n");
		break;
		case 4:
			printf("Programa encerrado.");
			// encerra o programa, � a �nica forma de sair do loop while(true)
			return 0;
			break;
	}
	}

}



float pedeValorArrecadado(){
	float valorArrecadado;
	
	printf("Valor arrecadado com o jogo:");
	scanf("%f",&valorArrecadado);
	fflush(stdin);
	// validadndo o valor arrecadado (se for menor que 1 milh�o e maior que 1000 o valor � v�lido, caso contr�rio...
	if(valorArrecadado < 1000000.0 && valorArrecadado > 1000.0) return valorArrecadado;
	// limpa a tela, exibe mensagem de erro e chama essa mesma fun��o novamente at� que um valor v�lido seja passado
	system("CLS");
	printf("Valor digitado � inv�lido, tente novamente...\n\n");
	return pedeValorArrecadado();
}

char presidente(char nome[MAX_PRE]){	
  FILE *pont_arq; // cria vari�vel ponteiro para o arquivo
  char nomePresidente[MAX_PRE]; // vari�vel do tipo string
  pont_arq = fopen("arquivo_nomePresidente.txt", "w");//abrindo o arquivo com tipo de abertura w
  
  //teste para ver se o arquivo foi realmente criado
	if(pont_arq == NULL){ 
		printf("Erro");
	return 1;
  }
  printf("Nome do Presidente da CBF:");
  scanf("%[^\n]s", &nomePresidente);
  fflush(stdin);
  
  
  // normalizando o nome do presidente: 

	int i;
	int tamanhoNome = strlen(nomePresidente);
	
	system("CLS");
	
	// primeiro colocando todas as letras do nome em min�scula
	for(i = 0; i < tamanhoNome; i++){
		nomePresidente[i] = tolower(nomePresidente[i]);
	}
	
	// primeira letra do nome em maiuscula
	nomePresidente[0] = toupper(nomePresidente[0]);
	
	// todas as letras depois do espa�o s�o mai�sculas
	for(i = 0; i < tamanhoNome; i++){
		if(nomePresidente[i] == ' ') {
			nomePresidente[i+1] = toupper(nomePresidente[i+1]);
		}			
	}
  
  
  
  //usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, "%s", nomePresidente);
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  return 0;
}



int pedeIdJogo(int idsJogos[MAX_JOGOS], int quantidadeJogosRegistrados){
	int idJogo;
	
	// pedindo o id do jogo
	printf("Numero de identificacao do jogo:");
	scanf("%d",&idJogo);
	fflush(stdin);
	
	// verifica se o id do jogo est� no intervalo de 300 e 10000 (n�o incluso) e usa a fun��o que verifica se o id ainda n�o foi adicionado no vetor de ids
	if(idJogo > 300 && idJogo < 10000 && jaFoiRegistrado(idsJogos, idJogo, quantidadeJogosRegistrados) == 0){
		return idJogo;
	} else { 
	// se o id do jogo n�o passou pelas verifica��es acima, ent�o o programa limpa a tela, exibe uma mensagem de erro e come�a o processo novamente at� achar um id v�lido
		system("CLS");
		printf("Valor digitado incorreto, tente novamente...\n\n");
		return pedeIdJogo(idsJogos, quantidadeJogosRegistrados);
	}

}

// fun��o que verifica se o id do jogo j� foi colocado dentro do vetor dos jogos j� registrados
// retorna 0 se o valor ainda n�o se encontra no vetor
// retorna 1 se o valor se encontra no vetor. 
int jaFoiRegistrado(int idsJogos[MAX_JOGOS], int idJogo, int quantidadeJogosRegistrados){
	int i;
	for(i = 0; i < quantidadeJogosRegistrados; i++){
		if(idsJogos[i] == idJogo) return 1;
	}
	return 0;
}

char lePresidente(char nome[MAX_PRE]){
	FILE *pont_arq;
  char nomePresidente[MAX_PRE];
  
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("arquivo_nomePresidente.txt", "r");
  
  //enquanto n�o for fim de arquivo o looping ser� executado
  //e ser� impresso o texto
  while(fgets(nomePresidente, 30, pont_arq) != NULL)
  printf("%s\n", nomePresidente);
  
  //fechando o arquivo
  fclose(pont_arq);
  
//  getch();
  return(0);
}
