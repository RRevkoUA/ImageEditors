#include <stdio.h>
#include "editor/Editor.c"
#include "photobag/Images.c"

#define EDITORS 3
#define IMG_COUNT 1000

double prod_summing(struct Editor *); // summing a productivity
void img_init(struct Images *);		  // initilization of images (giving id for all)

int main(void)
{
	struct Editor edit[EDITORS] = {
		{"Clacrk", 1.0 / 2.0, 0, 0},
		{"John", 1.0 / 3.0, 0, 0},
		{"Allah", 1.0 / 4.0, 0, 0}};

	double full_time = IMG_COUNT / prod_summing(edit); // Full time for editing all photos

	// for (short i = 0; i < EDITORS; i++)
	// 	*(edit + i) = init();

	struct Images img[IMG_COUNT];
	img_init(img);

	double images = IMG_COUNT;
	short n = 0;
	while (images > 0)
	{
		if (edit[n].timer < (int)full_time)
		{
			edit[n].timer = edit[n].timer + (1.0/edit[n].productivity);
			images--;
			edit[n].img++;
		}
		else
			n++;
	}

	for (short i = 0; i < EDITORS; i++)
	{
		printf("Editor %s, with prod %1.2f, have %d images\n", edit[i].name, edit[i].productivity, edit[i].img);
	}
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
