#include <stdio.h>

int main(void){
	
	float arrivo,partenza;
	int tot;

	printf("Orario arrivo?\n Esempio --> 15.45\n");
	scanf("%f",&arrivo);
	printf("Orario partenza?\n Esempio --> 18.20\n");
	scanf("%f",&partenza);
	if((partenza-arrivo)==2)
		printf("Costo parcheggio: 2$\n Grazie e arrivederci");
	else {
		tot=((partenza-arrivo)-1)+2;
		printf("Costo parcheggio: %d$\n Grazie e arrivederci",tot);
	
		
	}
}

