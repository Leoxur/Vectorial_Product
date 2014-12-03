#include "lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int flag;
int parser ( int termine[], char *string){

	int i; //Posizione
	char *s; //vettore di caratteri

	s = strtok (string, " " "," "{" "}"); //Termini che la funzione deve bypassare

	i=0;
	while ( s != NULL ){
		//Atoi è una funzione che converte stringhe in interi
		termine[i] = atoi (s);

		printf("termine[%d]=%d\n", i+1, termine[i]);

		s = strtok (NULL, " " "," "{" "}");
		if( i==9)
			printf("\n");
		i++;
	}

	if (s == NULL)
		flag=i;
}
