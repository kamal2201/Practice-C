#include <stdio.h>
#include <math.h>
int main()
{
    int d;
    float a, b;
    printf("1.Addition, 2.Subtraction, 3.Multiplication, 4.Division, 5.Power \n");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
        printf("Enter the first number: ");
        scanf("%f", &a);
        printf("Enter the second number: ");
        scanf("%f", &b);
        printf("The sum is %f \n", a+b);
        break;

        case 2:
        printf("Enter the first number: ");
        scanf("%f", &a);
        printf("Enter the second number: ");
        scanf("%f", &b);
        printf("The differnce is %f \n", a-b);
        break;

        case 3:
        printf("Enter the first number: ");
        scanf("%f", &a);
        printf("Enter the second number: ");
        scanf("%f", &b);
        printf("The product is %f \n", a * b);
        break;

        case 4:
        printf("Enter the first number: ");
        scanf("%f", &a);
        printf("Enter the second number: ");
        scanf("%f", &b);
        printf("The quotient is %f \n", a/b);
        break;

        case 5:
        printf("Enter the first number(Base): ");
        scanf("%f", &a);
        printf("Enter the second number(Power): ");
        scanf("%f", &b);
        printf("The product is %f \n", pow(a,b));
        break;

        default:
        printf("You have entered a wrong number \n");
    }

    return 0;
}