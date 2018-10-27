#include <stdio.h>

int main(){
	int a,count=0,countD=0;

		printf("Quanti numeri dispari vuoi visualizzare?");
		scanf("%d",&a);

		/*con ciclo while */
		while(1){			//ciclo infinito
			if(a==countD){
				break; //ferma il ciclo
			}else{
				if(count%2!=0){
				countD++;
				printf("Valore %d: %d\n ",countD,count);


				}
				count++;
			}


		}

			/*con ciclo for */
		/*	for(count=0;countD<a;count++){
					if(count%2!=0){
					countD++;
					printf("Valore %d: %d\n ",countD,count);

					}
				}

*/
}
