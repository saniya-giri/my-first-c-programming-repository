#include <stdio.h>

int main()
{
    int number1[5] = {1, 3, 4, 5, 3};
    int number2[3] = {4, 3, 2};
    int new_number[8];   
    int i, j;

    for (i = 0; i < 5; i++)
    {
        new_number[i] = number1[i];
    }

    for (j = 0; j < 3; j++)
    {
        new_number[i + j] = number2[j];
    }

    printf("Merged Array:\n");
    for (int k = 0; k < 8; k++)
    {
        printf("%d ", new_number[k]);
    }

    return 0;
}
