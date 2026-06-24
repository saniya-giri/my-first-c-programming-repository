#include <stdio.h>
int topPlayer(int option) 
{
    switch(option) 
    {
        case 1:
            printf("\nPlayer ID : 101\n");
            printf("Name      : Lionel Messi\n");
            printf("Country   : Argentina\n");
            printf("Score     : 5\n");
            break;
        case 2:
            printf("\nPlayer ID : 102\n");
            printf("Name      : Kylian Mbappe\n");
            printf("Country   : France\n");
            printf("Score     : 7\n");
            break;
        case 3:
            printf("\nPlayer ID : 103\n");
            printf("Name      : Cristiano Ronaldo\n");
            printf("Country   : Portugal\n");
            printf("Score     : 4\n");
            break;
        case 4:
            printf("\nPlayer ID : 104\n");
            printf("Name      : Neymar Jr\n");
            printf("Country   : Brazil\n");
            printf("Score     : 3\n");
            break;
        case 5:
            printf("\nPlayer ID : 105\n");
            printf("Name      : Luka Modric\n");
            printf("Country   : Croatia\n");
            printf("Score     : 2\n");
            break;
        default:
            printf("\nplease select any option.\n");
    }
    return 0;
}

int main()
 {
    int option;

    while(1)
     {
        printf("\n--- Top FIFA World Cup Countries ---\n");
        printf("1. Argentina\n");
        printf("2. France\n");
        printf("3. Portugal\n");
        printf("4. Brazil\n");
        printf("5. Croatia\n");
        printf("6. Exit\n");

        printf("\nEnter  select any option: ");
        scanf("%d", &option);

        if(option == 6) 
        {
            printf("\nThank you! Program exiting...\n");
            break;  
        }

        
        topPlayer(option);
    }

    return 0;
}
