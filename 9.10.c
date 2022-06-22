#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x=10,*p=&x;
	char cantor[]={"Freddie Mercury"},*q=&cantor;
	float y=2.4,*r=&y;
	
	printf("endereco de x=%d\n",&x); 
	printf("valor de x=%d\n",x);
	printf("endereco de y=%d\n",&y); 
	printf("valor de y=%f\n",y);
	printf("endereco de cantor=%d\n",&cantor); 
	printf("cantor=%s\n",cantor);
}
