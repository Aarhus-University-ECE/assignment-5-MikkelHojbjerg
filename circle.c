#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

void fiveCircles(circle c[]) {

	//Starter arrayet fra index 0
	c[0];

	//Looper hele arrayet for at sætte værdier ind
	for(int i = 0; i < 5; i++){
		//Tilføjer i's værdi til c.p.x
		c[i].p.x = i;
		//Tilføjer i's værdi til c.p.y
		c[i].p.y = i;
		//Tilføjer i's værdi til c.r
		c[i].r = i;
	}
}

int circleIsValid(const circle * c) {

	//Tjekker om radius af cirkel er positiv eller er lig eller under 0
	if(c->r > 0){
		return true;
	}else{
		return false;
	}
}

void translate(circle* c, const point* p) {

	//Henter punktet x fra cirkel og plusser den med et andet punkt og tildeler c.p.x den nye værdi
	c->p.x += p->x;
	//Henter punktet y fra cirkel og plusser den med et andet punkt og tildeler c.p.y den nye værdi
	c->p.y += p->y;
}



