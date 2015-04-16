#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
    string s = GetString();
    
    int count = 0;
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        // check if its alphabetical
        if((s[i] >= 'A' && s[i] <= 'Z') || 
           (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (count % 2 == 0)
            {
                s[i] = s[i] & ~('a' - 'A');
            }
            else
            {
                s[i] = s[i] | ('a' - 'A');
            count++;
            }
        }
    }
    
    printf("%s\n", s);   
}
