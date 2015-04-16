/*****************************************************
*
* Caesar.c 
* by Diarmuid Murphy (scabbyjoe)
*
* CS50x
*
* This program will take a key (number) that will off
* set the aphabet by said number or "key" and print 
* out a new "ciphered" word.
*
*****************************************************/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    // If the user does not give a key or they give
    // more than one the program returns 1 and ends
    if (argc != 2)
    {
        printf("You did not enter a key!\n");
        return 1;
    }
    
    // make and convert the string "key" into an int
    int key = atoi(argv[1]);
    
    key = (key % 26);
    
    if (key == 0)
        key = 26;
    
    // Get a plain text string from the user
    string plain_text = GetString();
    
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isalpha(plain_text[i]))
        {
            int character = (plain_text[i] + key);
        
            if (isupper(plain_text[i]))
            {
                if (character > 'Z')
                {
                    character = (character - 26);
                    printf("%c", character);
                }
                else
                    printf("%c", character);
            }
        
            if (islower(plain_text[i]))
            {
                if (character > 'z')
                {
                    character = (character - 26);
                    printf("%c", character);
                }
                else
                    printf("%c", character);
            }
        }
        else
            printf("%c", plain_text[i]);
    }
    
    printf("\n");

    return 0;
}
