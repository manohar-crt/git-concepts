#include <stdio.h>

// Function to find minimum and maximum
void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];   // initialize with first element

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];                                       // in functions  it only returns one value so we use pointers to return both min and max

        if (arr[i] < *min)                                       /*   functions 
                                                                   1. Input (what you give)
                                                                   2. Work (logic inside)
                                                                   3. Output (what it returns or changes)                         
                                                                     */
            *min = arr[i];
    }
}

int main(void)
{
    int a[] = {23, 4, 21, 98, 98, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int min, max;

    int len = sizeof(a) / sizeof(a[0]);

    minMax(a, len, &min, &max);

    printf("Minimum value in the array is: %d\n", min);
    printf("Maximum value in the array is: %d\n", max);

    return 0;
}
