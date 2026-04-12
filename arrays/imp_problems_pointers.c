/*
// it prints a adress of nariabl eusing %p
#include <stdio.h>
int main(void)
{
    int X = 10;
    int *p = &X;
    printf("%p",p);
    return 0;
}
*/
/*
#include <stdio.h>

// Function declaration 
int *findMid(int a[], int n);

int main(void)
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);// Calculate the number of elements in the array

    int *mid = findMid(a, n);  // Function call, mid will hold the address of the middle element
    printf("Middle element is: %d", *mid);

    return 0;
}

int *findMid(int a[], int n)  // Function definition
{
    return &a[n/2]; // Return the address of the middle element
}
*/
/*
#include <stdio.h>

// Function prototype
int findsecondlargest(int arr[], int X);

int main(void)
{
    int arr[] = {10, 20, 5, 8, 15};
    int X = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findsecondlargest(arr, X);

    printf("second largest element is %d", secondLargest);

    return 0;
}

int findsecondlargest(int arr[], int X)
{
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < X; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}


    [
 🔹 C Programming Quick Rules (Functions + Pointers)

1. Always declare function before use (prototype)
2. Function return type must match return value
3. Never return address of local (stack) variable
4. Local variables exist only inside function
5. Use pointers only when needed (not always required)
6. Array name = base address of array
7. sizeof(arr)/sizeof(arr[0]) → find array size
8. Initialize variables before using
9. Check edge cases (empty array, duplicates)
10. Compiler reads top → bottom

⚡ Pointer Rules:

* int *p → pointer declaration
* *p → value at address
* &x → address of variable
* Don’t use uninitialized pointer

💡 Debug Habit:

* Check return type
* Check function call
* Check memory (stack vs safe)

🔌 Embedded Note:
Wrong pointer use = crash / garbage values
Always be careful with memory

    ]

#include <stdio.h>
int *findMid(int arr[], int n);

int main(void)
{     int arr[]={1,2,3,4,5,6,7,8,9,10};
int n= sizeof(arr)/ sizeof(arr[0]);
int *mid=findMid(arr,n);
printf("the middle element is %d",*mid);
printf("\nthe address of middle element is %p",mid);
    return 0;
}
int *findMid(int arr[], int n)
{
    return &arr[n/2];
}

#include <stdio.h>

int main(void)
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int *p = &arr[4];
    p= p+2;                // here we are adding 2 to the pointer p, which means we are moving the pointer to the next 2 elements in the array. Since each integer takes 4 bytes of memory, adding 2 to the pointer will move it to the address of the element at index 6 (which is 7).
    printf("the value at the address is %d", *p);
    printf("\nthe address is %p", p);          // here id address is 1000 if we add 2 to the pointer it will point to the address 1008 because each integer takes 4 bytes of memory
    return 0;
}

#include <stdio.h>

int main(void)
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int *p = &arr[4];
    printf("%d", *(p++));   // we can also use ++p,p--,--p,also      
    printf("\nthe address is %p", p);          // here id address is 1000 if we add 2 to the pointer it will point to the address 1008 because each integer takes 4 bytes of memory
    return 0;
}

#include <stdio.h>

int main(void)
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int *P = &arr[4];
    int *q = &arr[6];
    printf("%d", P<=q);
    if(P<q)
    {
        printf("\nP is less than q");
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int sum = 0, *p;
    for(p=&arr[0]; p<=&arr[9]; p++)
    {
        sum += *p;
    }
    printf("Sum of array elements is: %d", sum);

    return 0;
}

#include <stdio.h>

int add(int arr[], int len)
{
    int sum=0;
    for(int i=0; i<len; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(void)
{
    int arr[]= {1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
     printf("%d", add(arr, len));
    return 0;
}
// p represemts the pointer of the  1D array
// * = the reference   , *p = pointerr to the forst element of first element of first  1D array


*/