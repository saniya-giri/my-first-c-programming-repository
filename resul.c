#include <stdio.h>

int main()
{
    char subject_1[20], subject_2[20], subject_3[20], subject_4[20], subject_5[20];
    int marks[5], total = 0;
    float percentage;
    char name[10];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your first subject: ");
    scanf("%s", subject_1);
    printf("Enter marks for %s: ", subject_1);
    scanf("%d", &marks[0]);

    printf("Enter your second subject: ");
    scanf("%s", subject_2);
    printf("Enter marks for %s: ", subject_2);
    scanf("%d", &marks[1]);

    printf("Enter your third subject: ");
    scanf("%s", subject_3);
    printf("Enter marks for %s: ", subject_3);
    scanf("%d", &marks[2]);

    printf("Enter your fourth subject: ");
    scanf("%s", subject_4);
    printf("Enter marks for %s: ", subject_4);
    scanf("%d", &marks[3]);

    printf("Enter your fifth subject: ");
    scanf("%s", subject_5);
    printf("Enter marks for %s: ", subject_5);
    scanf("%d", &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    percentage = (total / 500.0) * 100;
    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
