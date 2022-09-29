#pragma once

typedef struct point {
	int x;
	int y;
} point;

typedef struct circle{
	//Henter struct point, så p.x og p.y kan bruges i struct circle
	struct point p;
	int r;
}circle;

/*add your definition of circle here. You need top call it "circle"*/

void fiveCircles(circle c[]);
int circleIsValid(const circle* c);
void translate(circle* c, const point* p);
