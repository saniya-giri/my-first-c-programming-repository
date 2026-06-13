#include <stdio.h>
int main() 
{
    int choice,qty;
    float total=0;

    do {
        printf("\n===== FOOD MENU =====\n");
        printf("1. Pizza  - Rs 300\n");
        printf("2. Burge  - Rs 100\n");
        printf("3. Pasta  - Rs 150\n");
        printf("4. Cold Drink  - Rs 50\n");
        printf("5. Noodle  - Rs 100\n");
        printf("6. momos  - Rs 50\n");
        printf("7. spring roll  - Rs 200\n");
        printf("8. panner chilli  - Rs 200\n");
        printf("9. manchurian  -Rs 300\n");
        printf("10. chilly chicken  - Rs 500\n");
        printf("choose your favorite item: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d",&qty);

        switch(choice) 
        {
            case 1:
            total = 300*qty;
                printf("You ordered Pizza \n");
                break;
            case 2:
            total = 100*qty;
                printf("You ordered Burger \n");
                break;
            case 3:
            total = 150*qty;
                printf("You ordered Pasta \n");
                break;
            case 4:
            total = 50*qty;
                printf("You ordered Cold Drink \n");
                break;
            case 5:
            total = 100*qty;
                printf("You ordered noodle \n");
                break;
            case 6:
            total = 50*qty;
                printf("You ordered Momos \n");
                break;
            case 7:
            total = 200*qty;
                printf("You ordered spring roll \n");
                break;
            case 8:
            total = 200*qty;
                printf("You ordered paneer chilli \n");
                break;
            case 9:
            total = 300*qty;
                printf("You ordered Manchurian \n");
                break;
            case 10:
            total = 500*qty;
                printf("You ordered chilly chicken \n");
                break;    
            
            default:
                printf("Invalid choice! Please try again.\n");
        }
                printf("total bill = Rs %.2f",total);

    } while(choice != 10);

    return 0;
}
