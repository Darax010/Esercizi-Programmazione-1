#include <stdio.h>

int main(){
	int n;
	printf("la potenza di quale numero si vuole calcolare?");
	scanf("%d",&n);
	for(int i=1;i<=256;i=i*n){
		printf("numero %d \n",i);
	}
return 0;	
}
