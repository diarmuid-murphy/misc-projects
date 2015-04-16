# include <stdio.h>
# include <cs50.h>

int main (void)

{

    printf ("C: ");
    
    float celcius = GetFloat();
    float fahrenheit = ((celcius * 9) / 5) + 32;
    
    printf ("F: %.01f\n", fahrenheit);
    
    return 0;
    
}
