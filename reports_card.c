#include<stdio.h>
int main()
{
    int age,student_id;
    char student_name[10],address[20],qulification[20],email[20];

    printf("please Enter student name: ");
    scanf("%s", student_name);

    printf("please Enter student id: ");
    scanf("%d",&student_id );
    
    printf("please Enter your qulification: ");
    scanf("%s", qulification);
    
    printf("please Enter your age: ");
    scanf("%d",&age);
    
    printf("please Enter your address: ");
    scanf("%s", address);

    printf("please Enter your email id: ");
    scanf("%s", email);

    printf("name:  %s\n ",student_name);
    printf("id:  %d\n ",student_id);
    printf("age:  %d\n ",age);
    printf("email:  %s\n ",email);
    printf("address:  %s\n ",address);
    printf("qulification:  %s\n ",qulification);
    
    return 0;
}