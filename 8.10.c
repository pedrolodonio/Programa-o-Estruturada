#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x=2,y=8;
	int*p=&x,*q=&y;
	
	printf("endereco de x=%d\n",&x); 
	printf("valor de x=%d\n",x);
	printf("valor de p=%p\n",p);
	printf("valor de *p=%d\n",*p); 
	printf("endereco de y=%d\n",&y);
	printf("valor de y=%d\n",y);
	printf("valor de q=%p\n",q);
	printf("valor de *q=%d\n",*q);
	printf("endereco de p=%p\n",&p);
	printf("endereco de q=%p",&q);
	
}
