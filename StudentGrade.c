#include <stdio.h>
int main()
//above 420 distinction
//360-420 first class
//251-359 second class
//175-250 third class
//below 175 fail 
{
    int scr1, scr2, scr3, scr4, scr5, total;
    char name[20];
    printf("Student's Name: \n");
    scanf("%s", name);
    printf("Maths :\n");
    scanf("%d", &scr1);
    printf("Science :\n");
    scanf("%d", &scr2);
    printf("Social :\n");
    scanf("%d", &scr3);
    printf("English :\n");
    scanf("%d", &scr4);
    printf("Language :\n");
    scanf("%d", &scr5);
    total = scr1 + scr2 + scr3 + scr4 + scr5;
    printf("Total marks secured :%d \n", total);
    if ((scr1 < 35) || (scr2 < 35) || (scr3 < 35) || (scr4 < 35) || (scr5 < 35) )
    {
        printf("%s has failed. \n", name);
    }
    else if ((total >=421))
    {
        printf("%s has passed in distinction. \n",name);
    }
    else if ((total >= 360) && (total <= 420))
    {
        printf("%s has passesd in first class. \n",name);
    }
    else if ((total >= 251) && (total <= 359))
    {
        printf("%s has passed in second class. \n",name);
    }
    else if ((total >= 175) && (total <= 250))
    {
        printf("%s has passed in third class. \n",name);
    }
    else if ((total <175))
    {
        printf("%s has failed. \n",name);
    }
    return 0;
} 
    