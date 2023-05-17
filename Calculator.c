#include <stdio.h>
#include <math.h>
int main() {    

    float number1, number2;
    int option;
    float result;
    
    printf ("Calculator \n");
    printf ("For Addition Choose -> 1, Subtraction -> 2, Multiplication -> 3, Division - 4, Power of -> 5 \n");
    scanf("%d", &option);

    if ((option < 1 )|| (option > 5) )
    {
     printf ("You have chosen an invalid option , Please rerun the program by choosing valid option... \n");
     return 0;
    }

    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter second number: ");
    scanf("%f",  &number2);

    // calculating result
    if (option == 1)
    {
      result = number1 + number2;  
    } 
    else if (option == 2)
    {
        result = number1 - number2;
    }
    else if (option == 3 )
    {
        result = number1 * number2;
    }
    else if (option == 4)
    {
        result = number1 / number2;
    }
    else if (option == 5)
    {
    result = pow(number1,number2);
    }

    printf("result is  = %f \n", result);
    return 0;
}

