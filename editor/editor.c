#include "Editor.h"

Editor init(Editor ed)
{
    ed.img = 0;
    ed.timer = 0;
    return ed;
};

Editor print(Editor ed)
{
    printf("Editor %s, with prod %1.2f, have %d images in %d minutes\n", ed.name, ed.productivity, ed.img, ed.timer);
};

Editor initAll(Editor *ed, int editorsCount)
{
    for (short i = 0; i < editorsCount; i++)
        ed[i] = init(ed[i]);
};

Editor printAll(Editor *ed, int editorsCount)
{
    for (short i = 0; i < editorsCount; i++)
        print(ed[i]);
}