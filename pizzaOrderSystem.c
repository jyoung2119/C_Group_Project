#include <stdio.h>
#include <strings.h>
#include "toppings.h"
#include "pizzaCrust.h"
#include "pizzaSize.h"

// typedef struct pizza
// {
//     char *size;
//     char *crust;
//     toppings_t *toppings;           //Include beasleys header
//     struct pizza *next;
// }Node, *NodePtr;

#include "newPizza.h"

int main()
{
    NodePtr top = NULL;
    NodePtr current = top;
    // char *tempSize[10]; 
    // char *tempCrust[30]; 
    // char *tempToppings[256];

    int loop = 1;
    while (loop == 1) //setting up the looping menu
    {
        int choice1;
        printf("1)New Pizza\n2)Show Existing Pizzas\n3)Order & Quit\n"); //prompt user
        scanf("%d",&choice1); //accept user input
        if (choice1==1)
        {
            if(top == NULL)
            {
                top = newPizza();
                current = top->next;
            }
            else
            {
                current = newPizza();
            }
        }
        else if(choice1==2)
        {
            printPizzas(top);
        }
        else if(choice1==3)
        {
            loop = 0;
        }
        else
        {
            printf("ERROR INCORRECT INPUT\n\n");
        }   

    }
    aboutPage();
}