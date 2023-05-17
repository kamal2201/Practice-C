#include <stdio.h>
struct student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct student harry, ravi, shubam;
    harry.id = 1;
    ravi.id = 2;
    shubam.id = 3;
    harry.marks = 111;
    ravi.marks = 222;
    shubam.marks = 333;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubam.fav_char = 'p';

    printf("Harry got %d marks\n",harry.marks);
    printf("Harry got %d marks\n",ravi.marks);
    printf("Harry got %d marks\n",shubam.marks);
    printf("Harry's fav char is %c\n",harry.fav_char);
}