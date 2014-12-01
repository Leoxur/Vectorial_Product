#include "lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prodotto (int termine1[], int termine2[]){

	int i, prodotto[SIZE], risultato = 0;

	extern int flag;

	for (i=0; i<flag; i++){
		*(prodotto+i) = *(termine1+i)* *(termine2+i);
		risultato += prodotto[i];

		printf("Prodotto in corso[%d]= %d\n", i, prodotto[i]);
		}
	printf("Il prodotto vettoriale e': %d\n", risultato);
	return risultato;
}
