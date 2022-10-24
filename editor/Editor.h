struct Editor
{
    char *name;
    double productivity;
    int img;
    int timer;
};

struct Editor init(struct Editor); // Initilization img and timer to 0 (for 1 editor)

struct Editor print(struct Editor); // Print rezult (for 1 editor)

struct Editor initAll(struct Editor *, int); // Init img and timer to all editors

struct Editor printAll(struct Editor *, int); // Print rezult for all editors