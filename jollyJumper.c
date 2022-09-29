#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

int isJollyJumber(const int seq[], int size) {

	//Printer hvor mange differancer der er
	printf("\n%d\n", size-1);

	//Bool til at kontroller om der er flere differancer med samme værdi
	bool  diffs_found[size - 1];

	//Sætter alle værdier i arrayet til false
	for(int i = 0; i < size  - 1; i++){
		diffs_found[i] = false;
	}

	//Finder differancen fra det nuværende tal og det tidligere tal i arrayet
	for(int i = 1; i < size; i++){
		int diff = abs(seq[i] - seq[i-1]);
		printf("%d ", diff);
		/*Hvis differancen er større end arrayet så kan det aldrig blive en Jolly Jumper
		Hvis differancen er 0 kan arrayet heller ikke være en Jolly Jumper*/
		if(diff >= size || diff == 0){
			return 0;
		}


		/*Tjekker om diff værdien er gentagende, ved at tjekke om det der svarer til
		værdiens plads i arrayet er falsk og hvis ja, er det nu true */
		if(diffs_found[diff - 1] == false){
			diffs_found[diff - 1] = true;
		}

	}

	/*Tjekker bool arrayet om der er nogle falske pladser,
	Da hvis der er det, så er der to diff med samme værdi
	og arrayet er ikke en Jolly Jumper*/
	for(int i = 0; i < size - 1; i++){
		if(diffs_found[i] == false){
			return 0;
		}
	}

	return 1;
}

