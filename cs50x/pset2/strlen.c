#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int atgc, string argv[])
{

    string s = GetString();
    
    // Print out each character of a string
    
    // TODO
    
    for (int i = 0; i < strlen(s) ;i++)
    {
        printf("%c. ", s[i]);
    }
    printf("\n");
    
    return 0;
    
}
