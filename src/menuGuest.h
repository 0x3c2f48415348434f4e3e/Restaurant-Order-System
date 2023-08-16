void Guest();

typedef struct menuGuestTotalOrder{
    int Num;
    char ListOfFood[100];
    //struct menuMemberTotalOrder *next; //Holds info of previous information
} createGuest;

createGuest * guestSelection();
//void guestSelection();
