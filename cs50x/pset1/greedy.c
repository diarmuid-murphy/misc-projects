#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    float change;
    
    do
    {
        printf("How much change is owed? ");
        change = GetFloat();
    }
    while (change < 0);
    
    // Change the float value into pennies and then round off to nearest integer.
    change = round(change*100);
    
    
    int count = 0;
    
    while (change >= 25)
        {
        (change = (change-25));
        count++;
        }

    while (change >= 10)
        {
        (change = (change-10));
        count++;
        }
        
    while (change >= 5)
        {
        (change = (change-5));
        count++;
        }
        
        
    while (change >= 1)
        {
        (change = (change-1));
        count++;
        }
            
    printf("%d\n", count);
    
    return 0;
    
}
