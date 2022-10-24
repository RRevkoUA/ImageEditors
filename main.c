#include <stdio.h>
#include "Editor.c"



int main(void){
    struct Editor edit;
    edit = set_Editor(0,"Gay_Latge", 1.0/2.0);
    printf("My name %s, and my prod: %1.2f",edit.name, edit.productivity);
}