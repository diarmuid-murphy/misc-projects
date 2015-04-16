#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)

{
    printf("How many apples do you have? ");
    int i = GetInt();
    printf("Mwahaha. I'm going to eat one of them!\n");
    i = i - 1;
    printf("You now have %d apples!\n", i);
    
}
