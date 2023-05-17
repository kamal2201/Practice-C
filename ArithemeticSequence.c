#include <stdio.h>
int main()
{
    int n, a1, diff;

    printf("Enter the initial term: \n");
    scanf("%d", &a1);
    printf("Enter the difference: \n");
    scanf("%d", &diff);
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    printf("The n-th term of the sequence is %d \n", a1+(n-1)*diff); 
    return 0;
}