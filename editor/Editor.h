struct Editor
{
    char *name;
    double productivity;
    int img;
    int timer;
};

struct Editor init(struct Editor);              //Initilization img and timer to 0 (for 1 editor)

struct Editor print(struct Editor);             //Print rezult (for 1 editor)

struct Editor init_all(struct Editor*, int);    //Init img and timer to all editors

struct Editor print_all(struct Editor*, int);   //Print rezult for all editors