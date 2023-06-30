#include <stdio.h>

void Members();
void memberSelection();

struct menuMemberTotalOrder{
    int NumofFood;
    char *ListOfFood[] = (char *) malloc(1024*sizeof(char));
};