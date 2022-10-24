struct Editor
{
    char *name;
    double productivity;
    int img;
    int timer;
};

struct Editor init(struct Editor);

struct Editor print(struct Editor); 

struct Editor init_all(struct Editor*, int);

struct Editor print_all(struct Editor*, int);

