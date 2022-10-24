#include "Editor.h"

struct Editor init(struct Editor ed)
{
    ed.img = 0;
    ed.timer = 0;
    return ed;
};

struct Editor print(struct Editor ed)
{
    printf("Editor %s, with prod %1.2f, have %d images in %d minutes\n", ed.name, ed.productivity, ed.img, ed.timer);
};

struct Editor initAll(struct Editor *ed, int editorsCount)
{
    for (short i = 0; i < editorsCount; i++)
        ed[i] = init(ed[i]);
};

struct Editor printAll(struct Editor *ed, int editorsCount)
{
    for (short i = 0; i < editorsCount; i++)
        print(ed[i]);
}