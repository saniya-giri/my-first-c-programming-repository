#include<stdio.h>
int main()
{
    int option;
    int times,user_times;
    int number1,number2;
    printf("******************calculator************************");
    printf("\nnumber of times");
    scanf("%d",user_times);

    times = 0;
    do
    {
        printf("\n1. option of addition");
        printf("\n2. option of subtraction");
        printf("\n3. option of multiply");
        printf("\n4. option of divison");

        printf("\nplease enter your choice");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\enter number1 =");
                scanf("%d",&number1);
                printf("\enter number2 =");
                scanf("%d",&number2);
                printf("add = %d\n",number1+number2);
                break;
            case 2:
                printf("\enter number1 =");
                scanf("%d",&number1);
                printf("\enter number2 =");
                scanf("%d",&number2);
                printf("sub= %d\n",number1-number2);
                break;
            case 3:
                printf("\enter number1 =");
                scanf("%d",&number1);
                printf("\enter number2 =");
                scanf("%d",&number2);
                printf("multply = %d\n",number1*number2);
                break; 
            case 4:
                printf("\enter number1 =");
                scanf("%d",&number1);
                printf("\enter number2 =");
                scanf("%d",&number2);
                printf("divion = %f\n",(float)number1/number2);
                break; 
            case 5:
            printf("----------exit-------------");
            break; 
            default:
                printf("please enter valide option");
                break;       
        }
        times++;

    }
        while (times<user_times);

    return 0;
}