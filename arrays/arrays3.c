/*

#include <stdio.h>
#include <limits.h>   // for INT_MIN

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start both max and sec at the smallest possible int value
    int max = INT_MIN, sec = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            // New largest found → old max becomes second largest
            sec = max;
            max = arr[i];
        }
        else if (arr[i] > sec && arr[i] != max) {
            // Not the largest, but bigger than current second
            // arr[i] != max handles duplicates (e.g. arr = {5, 5, 3})
            sec = arr[i];
        }
    }

    if (sec == INT_MIN)
        printf("No second largest element found.\n");
    else
        printf("Largest: %d\nSecond Largest: %d\n", max, sec);

    return 0;
}          */

/*

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {

    // Normal Array - elements in order you write
    int normal[] = {10, 20, 30, 40, 50};
    printf("Normal:   10 20 30 40 50\n");

    // Unsorted Array - random order, no arrangement
    int unsorted[] = {5, 2, 8, 1, 9};
    printf("Unsorted: 5 2 8 1 9\n");

    // Sorted Array - arranged in ascending order
    int sorted[] = {5, 2, 8, 1, 9};
    qsort(sorted, 5, sizeof(int), compare);
    printf("Sorted:   1 2 5 8 9\n");

    return 0;
}
```

**Output:**
```
Normal:   10 20 30 40 50
Unsorted: 5 2 8 1 9
Sorted:   1 2 5 8 9

3 simple definitions:

Normal array → elements stored in the order you write them
Unsorted array → elements in random/mixed order
Sorted array → elements arranged low to high (ascending)

Tip: qsort() does the sorting for you — no need to write loops manually!
 */

/*

 #include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // k = index of last unique element written
    int k = 0;

    for (int i = 1; i < n; i++) {
        // If current element is different from last unique, keep it
        if (arr[i] != arr[k])
            arr[++k] = arr[i];   // overwrite next position with unique value
        // If arr[i] == arr[k], it's a duplicate → just skip it (do nothing)
    }

    int new_length = k + 1;
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < new_length; i++)
        printf("%d ", arr[i]);
    printf("\nNew length: %d\n", new_length);

    return 0;
}
*/