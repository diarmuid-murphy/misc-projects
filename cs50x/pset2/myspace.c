#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    printf("Please enter a string\n");
    string s = GetString();
    printf("The string is %s\n", s);

    for (int i=0; i<strlen(s); i+=2)
    {
        s[i] = s[i] - 23;
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
