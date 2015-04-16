#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc != 2)
        return 1;
        
        // second command line argument is the key
        
    int key = atoi(argv[1]); // number
    
    int chr = 'r'; // single quotes allow r to be used as an integer?!
    
    // TODO: use the users third command line argument 
    // int chr = argv[2][0];
    
    printf("\nCalculating '%c' + %d...\n", chr, key);
    
    int result = (chr + key);
    
    printf("The ASCII value of %c is %d. \n\n", result, result);
    
    return 0;
    
    


}
