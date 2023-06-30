//Main file
#include <stdio.h>
#include <stdbool.h>
#include "login.h"
#include "menuGuest.h"
#include "menuMember.h"

static bool running = false;

int main(int argc, char * argv[]){
    running = true;
    
    int val;
    val = Login();

    if(val){
        Members();
        memberSelection();
    }
    else{
        Guest();
    }
    
}