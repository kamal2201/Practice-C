#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int i,choice;
    int cpuscore,yourscore,temp;
    printf("Choose 0 --> Rock, 1 --> Paper, 2 --> Scissor \n");

    for(i=0;i<3;i++)
    {
        srand(time(NULL));
        temp = rand()%3;
        printf("You choose : ");
        scanf("%d",&choice);
        printf("CPU choose %d\n",temp);
        if (choice == 1 && temp == 2)
        {
            cpuscore++;
        }
        if (choice == 0 && temp == 2)
        {
            yourscore++;
        }
        if (choice == 2 && temp == 2)
        {
            cpuscore++;
            yourscore++;
        }
        if (choice == 0 && temp == 1)
        {
            cpuscore++;
        }
        if (choice == 1 && temp == 1)
        {   
            cpuscore++;
            yourscore++;
        }
        if (choice == 2 && temp == 1)
        {
            yourscore++;
        }
        if (choice == 0 && temp == 0)
        {
            cpuscore++;
            yourscore++;
        }
        if (choice == 1 && temp == 0)
        {
            yourscore++;
        }
        if (choice == 2 && temp == 0)
        {
            cpuscore++;
        }
    }
    if (cpuscore > yourscore)
    {
        printf("The computer won\n");
    }
    else if (cpuscore == yourscore)
    {
        printf("Tie\n");
    }
    else
    {
        printf("You Won\n");
    }
    return 0;
}   