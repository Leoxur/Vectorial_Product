#include "lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int flag;
int conversione ( int termine[], char *string){

	int i; //Posizione
	char *s; //vettore di caratteri

	s = strtok (string, " " "," "{" "}"); //Termini che la funzione deve bypassare
	
	i=0;
	while ( s != NULL ){
		//Atoi è una funzione che converte stringhe in interi
		termine[i] = atoi (s);	

		printf("s[%d]=%s\t", i, s);
		printf("termine[%d]=%d\n", i, termine[i]);

		s = strtok (NULL, " " "," "{" "}");
		i++;
	}

	if (s == NULL)
		flag=i;
}
