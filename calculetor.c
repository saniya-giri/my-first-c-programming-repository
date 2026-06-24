#include<stdio.h>
int main()
{
    int menu();
    int add();
    int subtract();
    int multiply();
    int division();
    int exit();

    int menu()
    {
        printf("\n1. addition");  
        printf("\n2 subtraction");  
        printf("\n3. multiplication");  
        printf("\n4. division");  
        printf("\n5. exit");      
    }

    int main()
    {
        int firstnumber,secondnumber;
        int option;

        menu();

        printf("\nplease select any option: ");
        scanf("%d",&option);

        printf("\nplease enter : ");
        scanf("%d",&firstnumber);

    }
    return 0;
}