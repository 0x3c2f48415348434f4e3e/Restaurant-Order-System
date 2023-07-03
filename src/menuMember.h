#include <stdio.h>
#include <stdlib.h>
void Members();
char * memberSelection();

typedef struct menuMemberTotalOrder{
    int NumofFood;
    char *ListOfFood;
    struct menuMemberTotalOrder *next; //Holds info of previous information
} create;