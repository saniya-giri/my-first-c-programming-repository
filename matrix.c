#include<stdio.h>
int main()
{
    int number[4][5];
    int i,j;
    for(i=0;i<4;i++)
    {
      for(j=0;j<5;j++)
      {
        scanf(" %d",&number[i][j]);
      }
    }
    printf("Matrix = \n");
    for(i=0;i<4;i++)
    {
      for(j=0;j<5;j++)
      {
        printf("\t%d",number[i][j]);
      }
      printf("\n");
    }
    return 0;
}