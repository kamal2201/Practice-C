#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i,j,len;

    printf("Enter a string : ");
    scanf("%s",string);

    len = strlen(string);
    for (i=0;i<len;i++)
    {
        if (string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'||string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            for (j=i;j<len;j++)
            {
                string[j]=string[j+1];
            }
            i--;
            len--;
        }
        string[len+1]='\0';
    }
    printf("After removing vowels : %s",string);
    return 0;
}