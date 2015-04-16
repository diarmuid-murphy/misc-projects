#include <cs50.h>
#include <stdio.h>

int main (void)

{

    int numerator;
    
    do
    {
        printf ("non-negative numerator: ");
        numerator = GetInt();
    }
    while (numerator < 0);
    
    int denominator;
    
    do
    {
        printf ("positive denominator: ");
        denominator = GetInt();
    }
    while (denominator <= 0);
    
    printf("%.02f%%\n", ((float) numerator/denominator) * 100);
    
}
