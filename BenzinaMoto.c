#include <stdio.h>


int main(){

	float km,litri;

	printf("kilometri percorsi?\n");
	scanf("%f",&km);
	printf("litri di benzina usati?\n");
	scanf("%f",&litri);
	printf("la vostra moto percorre %f kilometri con 1 litro di benzina\n",(km*1)/litri);
	return 0;
}

//x:n=y:1 => y=(x*1)/n

