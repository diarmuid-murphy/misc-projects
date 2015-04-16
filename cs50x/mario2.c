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
        printf("How tall would you like your pyramid to be?: ");
        height = GetInt();
    }
    while (height < 0);
    
    int i = 0;
    int j = 0;
    
    // This loop prints the number of spaces, then the number of hashes, 
    // then a new line and increases and decreases hashes and height.
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
        
    
    return 0;
}
