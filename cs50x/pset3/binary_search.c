#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    //TODO: return true iff needle is in haystack, using binary search
    
    int min = 0;
    int max = size;
    int midpoint = 0;
    
    while (midpoint != needle)
    {
        midpoint = ((max + min)/2);
        
        if (max < min)
        {
            return -1;
        }
        else
        {
            if (haystack[midpoint] < needle)
            {
                min = midpoint;
            }
        
            else if (haystack[midpoint] > needle)
            {
                max = midpoint;
            }
        
            else if (haystack[midpoint] == needle)
            {
                return true;
            }
        }
    }
    return 1;
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
