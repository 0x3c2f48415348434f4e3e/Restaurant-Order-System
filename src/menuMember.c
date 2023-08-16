#include <stdio.h>
#include <stdlib.h>
#include "menuMember.h"
#include <stdbool.h>
#include <string.h>
#define MAX 100
#define NUMITEMS 16 //Constant for num of items
#define SINGLEINPUT 1

#ifndef HOLD
    #define HOLD 2
#endif

void Members(){
    printf("\n########################################################################\n");
    printf("\nMembers get 20 percent discount");

    printf("\nGUEST MENU\nOur Menu includes...\n\n");

    printf("|STEAK| \t\t\t |SALAD|\n----------\nPork Steak - £10 \t\t Vegetable Salad - £10\n----------\nBeef Steak - £12 \t\t Fruit Salad - £12\n----------\n");

    printf("\nChicken Steak - £14 \t\t Macaronis Salad - £14\n----------\nFish Steak - £10 \t\t Chicken Salad - £10\n----------\n");


    printf("\n|PASTA| \t\t\t |GRILL|\n----------\nMacaroni and Cheese - £10 \t Grilled Greak Chicken- £10\n----------\nPasta Primavera - £12 \t\t Grilled Scampi - £12\n----------\n");

    printf("\nPenne with Pesto - £14 \t\t Cornell Grilled Chicken - £14\n----------\nPenne with Vodka Sauce - £10 \t Pork Grill - £10\n----------\n");

    printf("\n########################################################################\n");

}

create * memberSelection(){
    /*Create a simple algorithm that checks if
    an optin user eneters is not there and then tries to
    suggest what the user tried to enter*/
    
    //create our array to hold structures of food
    static create *ListOfFood[HOLD]; //(create*) malloc(1024*sizeof(create)); //dynamic memory alocation
    //Scanf() stops when it detects whitespace

    int top = -1; //empty list
    //Have an arry with all possible food
    char *food[] = {"Pork_Steak", "Beef_Steak", "Chicke_Steak", "Fish_Steak", "Vegetable_Salad", "Fruit_Salad", "Macaroni_Salad", "Chicken_Salad", "Macaroni_and_Cheese", "Pasta_Primavera", "Penne_with_Pesto", "Penne_with_Vodka_Sauce", "Grilled_Greak_Chicken", "Grilled_Scampi", "Cornell_Grilled_Chicken", "Pork_Grill"};

    //IK scanf should not be used, we fix that later
    char userInput[MAX];
    char waste[MAX];
    bool isStillOrdering = true;
    int num;
    printf("Please Enter Your Orders (Note: 1 order at a time): ");
    //scanf("%s",userInput);
    fgets(waste,MAX,stdin); //Get rid of waste in buffer
    fgets(userInput,MAX,stdin);

    do{
        //check that temp is initalized
        top+=1;
        //create space in memory
        create * store = (create*) malloc(sizeof(create));
        strcpy(store->ListOfFood,userInput);
        store->Num = top;
        ListOfFood[top] = (store);

        printf("Are you still ordering? (Y/N): ");
        //scanf("%s\n",quit);
        //fgets(waste,MAX,stdin);
        //fgets(quit,SINGLEINPUT,stdin);
        char quit = getc(stdin);
        fgets(userInput,MAX,stdin);
        //Check size
        //register int counter = 0;
        //Char is an int, so we can comapre like int
        
        if((quit == 'Y')|| (quit == 'y')){
            //fgets(waste,MAX,stdin);
            printf("\nPlease Enter Your Orders (Note: 1 order at a time): \n");
            //scanf("%s\n",userInput);
            //fgets(waste,MAX,stdin);
            fgets(userInput,MAX,stdin);
        }
        else if((quit == 'N') || (quit == 'y')){ 
            for(int i=0; i<=top; ++i){
                printf("Your orders are: %s",ListOfFood[i]->ListOfFood);
            }
            isStillOrdering = false;
        }
        else{
            printf("Unknown Entry...");
            exit(1);
        }
        
    }
    while(isStillOrdering);
    

    return ListOfFood[0];
}