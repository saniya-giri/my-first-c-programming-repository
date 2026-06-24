#include<stdio.h>

int add();
int subtract();
int multiply();
float division();

int add()
{
    int a=40;
    int b=20;
    printf("Sum: %d\n",a+b);
}


int subtract()
{
    int a=40;
    int b=20;
    printf("Subtract: %d\n",a-b);
}


int multiply()
{
    int a=40;
    int b=20;
    printf("multiply: %d\n",a*b);
}


float division()
{
    int a=40;
    int b=10;
    printf("division: %f\n",(float)a/b);
}
int main()
{
    add();
    subtract();
    multiply();
    division();
    
    return 0;
}