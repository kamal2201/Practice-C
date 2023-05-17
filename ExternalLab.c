#include <stdio.h>

int main() {
    char string[100];
    fgets(string, sizeof(string),stdin);
    puts(string);
    return 0;
}