//File for login procedure

#include <stdio.h>
#include <stdlib.h>
#include "login.h"


int Login(void){
    //Allow user to enter user name and password
    //Stay away from scanf as it is very vunerable to buffer overflow

    //Could actually use a libray to convert passwird to a hashed format and use that for comparison

    printf("1.) Guest\n2.) Member\n");
    int userInput;
    scanf("%i",&userInput);
    switch(userInput){
        case 1:
            printf("Welcome: ");
            return 0;
        case 2:
            printf("Connecting to Database...\n");
            //username and password
            char *username = (char *) malloc(100 * sizeof(char));
            char *password = (char *) malloc(100 * sizeof(char));
            printf("Enter Username");
            scanf("%s",username);
            printf("Enter Password");
            scanf("%s",password);
            //No validation or verification yet
            printf("Login Successful\n");
            return 1;
        default:
            printf("Unknown entry");
            exit(-1);

    }

//Next we are going to read username and password avaibale in the sen/password.txt file and compare it with user info to create a simple authentication
}