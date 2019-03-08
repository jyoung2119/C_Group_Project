#include <stdio.h>
#include <strings.h>

void newpizza();
void showpizza();

int main()
{
    int loop = 1;
    while (loop == 1) //setting up the looping menu
    {
        int choice1;
        printf("1)New Pizza\n2)Show Existing Pizzas 3)Order & Quit\n"); //prompt user
        scanf("%d",&choice1); //accept user input
        if (choice1==1)
        {
            newpizza();
        }
        else if(choice1==2)
        {
            showpizza();
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
}