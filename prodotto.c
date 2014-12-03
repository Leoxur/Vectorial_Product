#include "lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prodotto (int termine1[], int termine2[]){

	int i, prodotto[SIZE], risultato = 0;

	extern int flag;
	printf("\t\e[1;36m...Prodotto in corso...\e[00m\n");
	for (i=0; i<flag; i++){
		*(prodotto+i) = *(termine1+i)* *(termine2+i);
		risultato += prodotto[i];

		printf("P[%d]= %d\n", i+1, prodotto[i]);
		}	//1;40 grassetto
	printf("\e[1;40mIl prodotto vettoriale e': %d\e[00m\n", risultato);
	return risultato;
}
