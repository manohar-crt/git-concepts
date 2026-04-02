// pointers  is an variable that  having an capability to store  an address of  memory location 
// pointers are used to store the address of  variable and  also used to store the address of  array
//  before using the pointer we need to initialize the pointer with an address
// int S = 5; int *ptr = &S;  // ptr is a pointer variable that stores the address of S

/*
#include <stdio.h>

int main(void)
{
    int O = 12, *ptr = &O; // ptr is a pointer variable that stores the address of O
   // printf("%d\n", O);   // 12
    printf("%d\n", *ptr); // here pointer  pointinng the address of the O variable and  *ptr is used to access the value stored at that address which is 12
    return 0;
}


#include <stdio.h>

int main(void)
{
    int X = 20, *ptr= &X;
    *ptr = 25;                     //* = pointer symbol (fixed)
                                   //ptr = just a label (your choice)
    printf("%d", *ptr);
    return 0;
}
    */
   /*
    #include <stdio.h>
    
    int main(void)
    {
        int i = 20;
        int  *p, *q;
        p = &i;
        q = p;
        printf(" %d, %d", *p, *q);
        return 0;
    }
    */
   /*
 #include <stdio.h>
 
 int main(void)
 {
     int x = 10;
     int *ptr;
     ptr = &x;
     printf("%d", *ptr);

     return 0;
 }*/
/*
 #include <stdio.h>
 
 int main(void)
 {
     int i = 10, j= 20;
     int *p, *q;
     p = &i;
     q = &j;
     printf("%d, %d", *p, *q);
     return 0;
 }
 */
/*
 #include <stdio.h>
 
 int main(void)
 {
     printf("Enter the number of elements in the array: ");
     int n;
     scanf("%d", &n);
     int arr[n];
     printf("Enter %d elements:\n", n);
     for (int i = 0; i < n; i++)
         scanf("%d", &arr[i]);
      int min, max;
        min = max = arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i] < min)
                min = arr[i];
            if(arr[i] > max)
                max = arr[i];
        }
     printf("The minimum number in the array is %d\n", min);
     printf("The maximum number in the array is %d\n", max);

     return 0;
 }
*/


