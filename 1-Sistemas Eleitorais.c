#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade = 0;
	printf("eleitoral\n");
	printf("digite a idade\n");
	scanf("%d",&idade);
	if(idade<1)
		printf("nao nasceu");
	else
		if(idade>=1 && idade<=15)
			printf("não vota");
		else
			if(idade==16|| idade==17)
				printf("voto opicional");
			else
				if(idade==41)
					printf("ganhou o premio 1 $$$");
				else
					if(idade==82)
						printf("ganhou o premio 2 $$$");
					else
						if(idade>=18 && idade!=41 && idade<=64)
							printf("voto obrigatorio");
						else
							if(idade>=65 && idade!=82)
								printf("voto opicional");
	return 0;
}
