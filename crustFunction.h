//this is a .h file to be included in the main pizza menu. 
//it returns a string which is the choice of crust by user.

#include <stdio.h>
#include <string.h>

char crustFunc();

int main()
{
    crustFunc();
}
char crustFunc()
    {
        int choice = 0;
        char * crustyString;

        printf("Which crust would you like? Choose\n 1- Thick\n 2- Hand-tossed\n 3- Thin\n 4- Cheese-stuffed\n 5- Deep-dish\n");
        scanf("%d", &choice);

        if(choice < 1 || choice > 5)
        {
            printf("ERROR: Enter a number from 1-5\n");
            crustFunc();
        }
        else 
        {
            switch(choice)
            {
            case 1:
                crustyString = "Thick";
                break;

            case 2: 
                crustyString= "Hand-tossed";
                break;
            
            case 3: 
                crustyString = "Thin";
                break;
            
            case 4:
                crustyString = "Cheese-stuffed";
                break;
            
            case 5:
                crustyString = "Deep Dish";
                break;
            }
            //printf("Your crust choice is: %s\n", crustyString);    
        }           

        return *crustyString;
    }


