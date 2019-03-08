#include <stdio.h>
//#include <>

// Pizza size
//extern int sizza(void)
int main()
{
    int choice;
    char *pizzaSize[4];

    printf("\n[PIZZA SIZES]\n\n");
    printf("|Personal[1]: 8\"|\n|Small[2]: 10\"|\n|Medium[3]: 12\"|\n|Large[4]: 14\"|\n|X-Large[5]: 16\"|\n|Murica[6]: 24\"|\n");
    printf("Select your size: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            pizzaSize[4] = "8\"";
            break;
        case 2:
            pizzaSize[4] = "10\"";
            break;
        case 3:
            pizzaSize[4] = "12\"";
            break;
        case 4:
            pizzaSize[4] = "14\"";
            break;
        case 5:
            pizzaSize[4] = "16\"";
            break;
        case 6:
            pizzaSize[4] = "24\"";
            break;
        default:
            printf("Error in input\n");
            //sizza();
            break;
    }
    
    //return pizzaSize;
    printf("%s", pizzaSize);
}