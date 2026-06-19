#include <stdio.h>

int main()
 {
    int array[10];          
    int newarray[10];     
    int count = 0;
    
    for (int i = 0; i < 10; i++)
    {
        array[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) 
    {
        if (array[i] % 2 == 0)
         {
            newarray[count] = array[i];
            count++;
         }
    }

    printf("Even numbers array:\n");
    for (int i = 0; i < count; i++)
     {
        printf("%d ", newarray[i]);
     }

    return 0;
}
