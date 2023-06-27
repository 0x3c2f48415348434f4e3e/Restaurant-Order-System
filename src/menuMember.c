#include "menuMember.h"
#define NUMITEMS 16 //Constant for num of items

void Members(){
    printf("\n########################################################################");

    printf("\nGUEST MENU\nOur Menu includes...\n\n");

    printf("|STEAK| \t\t\t |SALAD|\n----------\nPork Steak - £10 \t\t Vegetable Salad - £10\n----------\nBeef Steak - £12 \t\t Fruit Salad - £12\n----------\n");

    printf("\nChicken Steak - £14 \t\t Macaronis Salad - £14\n----------\nFish Steak - £10 \t\t Chicken Salad - £10\n----------\n");


    printf("\n|PASTA| \t\t\t |GRILL|\n----------\nMacaroni and Cheese - £10 \t Grilled Greak Chicken- £10\n----------\nPasta Primavera - £12 \t\t Grilled Scampi - £12\n----------\n");

    printf("\nPenne with Pesto - £14 \t\t Cornell Grilled Chicken - £14\n----------\nPenne with Vodka Sauce - £10 \t Pork Grill - £10\n----------\n");

    printf("\n########################################################################\n");

}

void memberSelection(){
    /*Create a simple algorithm that checks if
    an optin user eneters is not there and then tries to
    suggest what the user tried to enter*/
    

    //Have an arry with all possible food
    char *food[] = {"Pork Steak", "Beef Steak", "Chicke Steak", "Fish Steak", "Vegetable Salad", "Fruit Salad", "Macaroni Salad", "Chicken Salad", "Macaroni and Cheese", "Pasta Primavera", "Penne with Pesto", "Penne with Vodka Sauce", "Grilled Greak Chicken", "Grilled Scampi", "Cornell Grilled Chicken", "Pork Grill"};
}