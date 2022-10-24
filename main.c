#include <stdio.h>
#include "editor/Editor.c"

#define EDITORS 3	   // Editors count
#define IMG_COUNT 1000 // Image count

double prod_summing(struct Editor *); // Summing a productivity
void proccesing(struct Editor* );     // Main proccesing

int main(void)
{
	struct Editor edit[EDITORS] = {// Editors init
								   {"Clacrk", 1.0 / 2.0},
								   {"John", 1.0 / 3.0},
								   {"Allah", 1.0 / 4.0}};
								   //Name, Productivity (1/img count per minute)

	init_all(edit, EDITORS);
	proccesing(edit);
	print_all(edit, EDITORS);
}

double prod_summing(struct Editor *ed)
{
	double sum = 0;
	for (short i = 0; i < EDITORS; i++)
	{
		sum += ed[i].productivity;
	}
	return sum;
}

void proccesing(struct Editor* ed){
	
	double full_time = IMG_COUNT / prod_summing(ed); // Full time for editing all photos
	double images = IMG_COUNT;
	short n = 0;

	while (images > 0)
	{
		if (ed[n].timer < (int)full_time)
		{
			ed[n].timer = ed[n].timer + (1.0 / ed[n].productivity);
			images--;
			ed[n].img++;
		}
		else
			n++;
	}	
}