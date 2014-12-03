#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[SIZE]){

	int i, termine1[SIZE], termine2[SIZE];
	printf ("\n\e[1;42m------QUESTI SONO GLI ARGOMENTI PASSATI------\e[00m\n");
	printf("\targv1 = %s\n", *(argv+1) );
	printf("\targv2 = %s\n\n", *(argv+2) );

	parser (termine1, *(argv+1) );
	parser (termine2, *(argv+2) );

	return prodotto (termine1, termine2);
}
