#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    //TODO: return true iff needle is in haystack, using binary search
    
    int min = 0;
    int max = SIZE;
    int midpoint = 0;
    
    while (needle != haystack[midpoint])
    {
        size = (max - min);
        midpoint = (size/2);
        
        if (midpoint < needle)
            max = midpoint;
            
        else if (midpoint > needle)
            min = midpoint;
            
        else if (midpoint == needle)
            return true;
            
        else return 1;
    }
    return 0;    
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
        printf("YES\n");
    return 0;
}
