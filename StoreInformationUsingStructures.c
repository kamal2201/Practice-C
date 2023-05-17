#include <stdio.h>

struct StoreInformationUsingStructures
{
    char name[20]; int age; float marks;
}student;

int main()

{
    printf("Enter Information :\n");
    printf("Enter name : ");
    fgets(student.name,sizeof(student.name),stdin);
    printf("Enter age : ");
    scanf("%d",&student.age);
    printf("Enter marks : ");
    scanf("%f", &student.marks);

    printf("Displaying Information : \n");
    printf("Name : %s", student.name);
    printf("Age : %d\n", student.age);
    printf("Marks : %f\n", student.marks);
    return 0;
}