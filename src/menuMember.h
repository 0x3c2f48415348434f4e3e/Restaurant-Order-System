#include <stdio.h>
#include <stdlib.h>
void Members();

typedef struct menuMemberTotalOrder{
    int Num;
    char ListOfFood[100];
    //struct menuMemberTotalOrder *next; //Holds info of previous information
} create;

create * memberSelection();