#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
    char name[10];
    int age;
    int id;
}Employee;

int main()
{
    Employee emp1;
    Employee emp2 = {"Jake",24,123};

    emp1 = emp2;

    printf("Employee #1 name is %s\n", emp1.name);
    printf("Employee #2 name is %s\n", emp2.name);

    strcpy(emp1.name,"John");
    printf("Employee #1 name is %s\n", emp1.name);
    printf("Employee #1 age is %d\n", emp1.age);
    printf("Employee #1 id is %d\n", emp1.id);
    
    return 0;
}