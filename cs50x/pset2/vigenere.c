/*****************************************************
*
* Vigenere.c 
* by Diarmuid Murphy (scabbyjoe)
*
* CS50x
*
* This program will take a key (word) that will off
* set the aphabet by the relevant key letter and print 
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
    
    // This will check if the key contains numbers. ie. Hax0r2
    string test_for_numbers = (argv[1]);
    for(int k=0; k < strlen(test_for_numbers); k++)
    {
        if (isdigit(test_for_numbers[k]))
        {
            printf("You can use numbers!\n");
            return 1;
        }
    }
    
    int i = 0;
    int j = 0;
    
    string original_key = (argv[1]);
    // Get phrase to encrypt
    string plain_text = GetString();
    
    // Start main loop    
    while (i < strlen(plain_text))
    {
        int key = (original_key[j] - 97); // Deals with a capital letter, in retrospect I did this a pretty awkward way :/
        
        if (key < 0)
        {
            key = (key + 32); // Deals with a lowercase letter
        }
        
        if (isalpha(plain_text[i]))
        {
            int character = (plain_text[i] + key);
            
            if(isupper(plain_text[i]))
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
            
            i++;
            j++;
            
            // Loops back to start of code word
            if (j == strlen(original_key))
            {
                j = 0;
            }
        }
        else
        {
        printf("%c", plain_text[i]);
        i++; // Only itereates the place within the phrase, not the code word. ie in case of a blank.
        }
           
    }
    
    printf("\n");
    
    return 0;
}

