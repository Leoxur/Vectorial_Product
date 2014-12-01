#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[SIZE]){
	
	int i, termine1[SIZE], termine2[SIZE];
	
	printf("argv1=%s\n", *(argv+1) );	
	printf("argv1=%s\n", *(argv+2) );

	conversione (termine1, *(argv+1) );
	conversione (termine2, *(argv+2) );
	
	return prodotto (termine1, termine2);
}
