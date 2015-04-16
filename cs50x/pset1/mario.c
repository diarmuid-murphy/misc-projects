/**
*This is a program which prints a number of "#" signs to make a half pyramid (like in mario)
*/

#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int height;
    int hashes = 2;
    
    // This will ask the user how tall to make the pyramid.    
    do
    {
        printf("Height: ");
        height = GetInt();
    }
    
    while (height < 0 || height > 23);
    
    // This will deal with with a pyramid of 0 height.
    if (height == 0)
        printf("");
        
    else
    {       
    // This loop prints the number of spaces, then the number of hashes, 
    // then a new line and increases and decreases hashes and height.
    
        int i = 0;
        int j = 0;
        
        do
        {
            for (i=0; i < height-1; i++)
                printf(" ");
            for (j=0; j< hashes; j++)
                printf("#");
            printf("\n");
            
            hashes++;
            height--;
            
        }   
        while (height > 0);
        
    }
    return 0;
}
