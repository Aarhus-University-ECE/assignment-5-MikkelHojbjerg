#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include "circle.h"
#include "jollyjumper.h"
#include <assert.h>

void printCircle(circle c) {
	printf("\np.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5];
	fiveCircles(c);

	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}

	point p;
	p.x = 2;
	p.y = 2;

	translate(&c[1], &p);
	printCircle(c[1]);

	printf("\nisValid: %d\n", circleIsValid(&c[1]));

	/*answer to exercise 7.b*/
	int n; /*number of numbers to read*/
	/*readin n and check that is is OK*/

	//Bruger intaster længde på array
	printf("\nSkriv længden på dit array:\n");
	scanf("%d", &n);

	/*Hvis arrayets størrelse er lig eller under 1
	kan der ikke findes nogle diffenrancer*/
	assert(!(n <= 1);

	int *numbers = malloc(sizeof(int) * n); /*the numbers read*/

	//Bruger intaster værdier af arrayet
	printf("Skriv dine værdier i arrayet:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &numbers[i]);
	}

	/*readin the n numbers in the array numbers*/

	if (isJollyJumber(numbers, n)) {
		printf("\nit is a Jolly Jumper\n");
	}else{
		printf("\nnot a Jolly Jumper\n");
	}

	return 0;

}
