//somma //
#include <stdio.h>
void menu();
int main(void){
	int a,b;
	char op;
	printf("inserisci primo numero\n ");
	scanf("%d", &a);
	printf("inserisci secondo numero\n ");
	scanf("%d", &b);
	do{
	menu();
	printf("inserisci operatore\n ");
	scanf("%d", &op);
	switch(op){
		case 1:{
			printf("la somma tra %d e %d e' %d ",a,b,a+b);
			break; 
		}
		case 2:{
			printf("la sottrazione tra %d e %d e' %d ",a,b,a-b);
			break;
		}
		case 3:{
			if(b!=0){
				printf("il quoziente tra %d e %d e' %f ",a,b,(float)a/b);
			}
			break;
		}
		case 4:{
			printf("il prodotto tra %d e %d e' %d ",a,b,a*b);
			break;
		}
		default: {
			printf("operatore inesistente");
			break;
		}
	}
  }while(op!= 5);	
}	
void menu(){
	printf("\n\t 1-SOMMA \n\t 2- SOTTRAZIONE \n\t 3- DIVISIONE \n\t 4- MOLTIPLICAZIONE \n\t 5 ESCI\n");
	}
