#include <stdio.h>
#include "editor/Editor.c"
#include "photobag/Images.c"

#define EDITORS 3
#define IMG_COUNT 1000

double prod_summing(struct Editor *); // summing a productivity
void img_init(struct Images *);       // initilization of images (giving id for all)

int main(void)
{
	struct Editor edit[EDITORS] = {
		{"Clacrk", 1.0 / 2.0},
		{"John", 1.0 / 3.0},
		{"Allah", 1.0 / 4.0}};

	double full_time = IMG_COUNT / prod_summing(edit); // Full time for editing all photos

	for (short i = 0; i < EDITORS; i++)		
		*(edit + i) = img_in();

	struct Images img[IMG_COUNT];
	img_init(img);
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

void img_init(struct Images *img)
{
	for (short i = 1; i <= IMG_COUNT; i++)
	{
		img->id = i;
	}
}
