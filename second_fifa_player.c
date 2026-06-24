#include<stdio.h>

int menu();
int player1();
int player2();
int player3();
int player4();
int player5();

int menu()
{
    printf("\n1. player: ");
    printf("\n2. player: ");
    printf("\n3. player: ");
    printf("\n4. player: ");
    printf("\n5. player: ");
    return 0;
}

int player1()
{
    char name[30], country[30];
    int id;

    printf("\nplease enter first player id: ");
    scanf("%d",&id);

    printf("please enter first player name: ");
    scanf("%s",name);

    printf("please enter first player country: ");
    scanf("%s",country);

    printf("id=%d\n",id);
    printf("name=%s\n",name);
    printf("country=%s\n",country);

    return 0;
}

int player2()
{
    char name[30], country[30];
    int id;

    printf("\nplease enter second player id: ");
    scanf("%d",&id);

    printf("please enter second player name: ");
    scanf("%s",name);

    printf("please enter second player country: ");
    scanf("%s",country);

    printf("id=%d\n",id);
    printf("name=%s\n",name);
    printf("country=%s\n",country);
    return 0;
}

int player3()
{
    char name[30], country[30];
    int id;

    printf("\nplease enter third player id: ");
    scanf("%d",&id);

    printf("please enter third player name: ");
    scanf("%s",name);

    printf("please enter third player country: ");
    scanf("%s",country);

    printf("id=%d\n",id);
    printf("name=%s\n",name);
    printf("country=%s\n",country);
    return 0;
}

int player4()
{
    char name[30], country[30];
    int id;

    printf("\nplease enter forth player id: ");
    scanf("%d",&id);

    printf("please enter forth player name: ");
    scanf("%s",name);

    printf("please enter forth player country: ");
    scanf("%s",country);

    printf("id=%d\n",id);
    printf("name=%s\n",name);
    printf("country=%s\n",country);
    return 0;
}

int player5()
{
    char name[30], country[30];
    int id;

    printf("\nplease enter fifth player id: ");
    scanf("%d",&id);

    printf("please enter fifth player name: ");
    scanf("%s",name);

    printf("please enter fifth player coutry: ");
    scanf("%s",country);

    printf("id=%d\n",id);
    printf("name=%s\n",name);
    printf("country=%s\n",country);

    return 0;
}

int main()
{
    menu();
    player1();
    player2();
    player3();
    player4();
    player5();

    return 0;
}
