#include<stdio.h>
int main()
{
   int number[10]={56,45,23,76,45,65,12,15,43,98};
   int i; 
   int maximum=number[0];
   int minimum=number[0]; 
   for (i=0; i<10;i++)
   {
    if (number[i]>maximum)
    
        maximum=number[i];
    }

    for (i=0; i<10;i++)
    {
    if (number[i]<minimum)
    {
        minimum=number[i];
    }
   }

printf("maximum=%d\n",maximum);
printf("minimum=%d\n",minimum);
    return 0;
}