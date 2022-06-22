#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb) {
int t; t=*pa; *pa=*pb; *pb=t;
}

int main(void){
	int x[5]={0,1,2,3,4},*p=&x;
	
	do{
		troca(*p+1,*p+4);
		printf("valor de x=%d",*p); 
		*p++;	
	}while(*p<5);

	
	
	}
