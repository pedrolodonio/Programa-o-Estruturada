#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[70],endereco[15],complemento[20],bairro[25],estado[2],cidade[20],email[50];
	int	numero,cep,celular,telefoneres,cpf,cnpj,insmun,insest,cnae,ddn,cntr,boleto,telcom,data,nv,i;
	printf(">>>>Dados do credenciado<<<<\n");
	printf("Razao Social e Nome\n");
	scanf("%s",&nome);
	printf("Endereco\n");
	scanf("%s",&endereco);
	printf("Numero\n");
	scanf("%d",&numero);
	printf("Complemento\n");
	scanf("%s",&complemento);
	printf("Bairro\n");
	scanf("%s",&bairro);
	printf("CEP\n");
	scanf("%d",&cep);
	printf("Estado\n");
	scanf("%s",&estado);
	printf("Cidade\n");
	scanf("%s",&cidade);
	printf("DDD+Telefone Comercial/Residencial\n");
	scanf("%d",&telefoneres);
	printf("DDD+Telefone Celular\n");
	scanf("%d",&celular);
	printf("CPF\n");
	scanf("%d",&cpf);
	printf("CNPJ(Preenchimento exclusivo para PJ)\n");
	scanf("%d",&cnpj);
	printf("inscricao estadual(Preenchimento exclusivo para PJ)\n");
	scanf("%d",&insest);
	printf("inscricao municipal(Preenchimento exclusivo para PJ)\n");
	scanf("%d",&insmun);
	printf("CNAE(Preenchimento exclusivo para PJ)\n");
	scanf("%d",&cnae);
	printf("Contato do Responsavel(Preenchimento exclusivo para PJ)\n");
	scanf("%d",&cntr);
	printf("Data de Nascimento\n");
	scanf("%d",&ddn);
	printf("email\n");
	scanf("%s",&email);
	do{
		printf("deseja receber os boletos por email?\n 1-sim\n 2-nao\n");
		scanf("%d",&boleto);
	}
	while (boleto!=1 && boleto!=2);
	printf("telefone comercial\n");
	scanf("%d",&telcom);
	printf("data\n");
	scanf("%d",&data);
	printf(">>>>Veiculos<<<<\n");
	printf("quantos veiculos?\n");
	scanf("%d",&nv);
	struct veiculo{
		int ano;
		char modelo[30],cor[30],placa[7];
	};
	struct veiculo veiculo[nv];
	for(i=0;i<nv;i++){
		printf("placa do veiculo\n");
		scanf("%s",&veiculo[i].placa);
		printf("modelo\n");
		scanf("%s",&veiculo[i].modelo);
		printf("cor\n");
		scanf("%s",&veiculo[i].cor);
		printf("ano\n");
		scanf("%d",&veiculo[i].ano);
	}
	printf("Razão Social e Nome:%s\n",nome);
	printf("Endereco:%s\n",endereco);
	printf("Numero:%d\n",numero);
	printf("complemento:%s\n",complemento);
	printf("bairro:%s\n",bairro);
	printf("CEP:%d\n",cep);
	printf("Estado:%s\n",estado);
	printf("Cidade:%s\n",cidade);
	printf("Telefone Comercial/Residencial:%d\n",telefoneres);
	printf("Telefone Celular:%d\n",celular);
	printf("CPF:%d\n",cpf);
	printf("CNPJ(PJ):%d\n",cnpj);
	printf("Inscricao Estadual(PJ):%d\n",insest);
	printf("Inscrição Municipal(PJ):%d\n",insmun);
	printf("CNAE(PJ):%d\n",cnae);
	printf("Contato do responsavel(PJ):%d\n",cntr);
	printf("Data de nascimento:%d\n",ddn);
	printf("Email:%s\n",email);
	switch(boleto){
		case 1:
		printf("Receber boletos por email\n");
		break;
		case 2:
		printf("Nao receber boletos por email\n");
		break;
	}
	printf("Telefone Comercial:%d\n",telcom);
	printf("Data:%d\n",data);
	printf(">>>>Veiculos<<<<\n");
	for(i=0;i<nv;i++){
		printf("placa do veiculo:%s\n",veiculo[i].placa);
		printf("modelo:%s\n",veiculo[i].modelo);
		printf("cor:%s\n",veiculo[i].cor);
		printf("ano:%d\n",veiculo[i].ano);
	}
	
}
	
