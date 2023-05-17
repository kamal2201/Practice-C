#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf ("Addition of two numbers \n");
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d",  &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("Sum of %d + %d is = %d \n", number1, number2, sum);
    return 0;
}

