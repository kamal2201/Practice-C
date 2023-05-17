#include <stdio.h>
#include <math.h>
int main()

{
    int x1,y1,x2,y2,x3,y3;
    float m1,m2;

    printf("Enter the first point : \n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point : \n");
    scanf("%d %d", &x2, &y2);
    printf("Enter the third point : \n");
    scanf("%d %d", &x3, &y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("Slope 1 is %f and Slope 2 is %f \n", m1, m2);

    if(m1==m2)
    {
        printf("All three points lie on the same line. \n");
    }
    else
    {
        printf("They are not collinear. \n");
    }
    return 0;
}