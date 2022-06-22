#include <stdio.h>
#include <stdlib.h>

void troca(int *pa, int *pb);

int main(void){
	int x[5]={0,1,2,3,4};
	int i;
	
	troca(x+1,x+4);
	
	for(i=0;i<5;i++){
		printf("valor de x=%d\n",x[i]); 
	}
}
void troca(int *pa, int *pb) {
	int t; 
	t=*pa;
	*pa=*pb;
	*pb=t;
}
