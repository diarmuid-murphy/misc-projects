#include <stdio.h>

#define SIZE 8

void sort (int array[], int size)
{
    //TODO: sort array using any algorithm
    
    // Deals with the number of iterations and makes sure it doesnt exceed n-1
    for (int i = 0; i < (SIZE - 1); i++)
    {
        for (int j = 0; j < (SIZE - 1); j++)
        {
            if (array[j] > array[(j+1)])
            {
                int temp = array[(j+1)];
                array[(j+1)] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    return 0;
}
