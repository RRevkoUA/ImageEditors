typedef struct Editor
{
    char *name;
    double productivity;
    int img;
    int timer;
} Editor;

Editor init(Editor); // Initilization img and timer to 0 (for 1 editor)

Editor print(Editor); // Print rezult (for 1 editor)

Editor initAll(Editor *, int); // Init img and timer to all editors

Editor printAll(Editor *, int); // Print rezult for all editors