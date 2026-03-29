
/*
#include <stdio.h>
char arr[5]={'abccccccccccde'},i;

int main(void)

{  printf("\nthe numbers in the follwing arrys are: ");
    
    for(i = 0; i<=5; i++){
    
    printf(" %c", arr[i]);
}
    return 0;
}*/
/*
#include <stdio.h>

int a[]= {5, 10, 15, 20},i,sum;

int main(void)
{   printf("the following arry is going to add each other using sum variable\n");
    for(i=0; i<=4; i++){

       printf(" %d", a[i]);
       
        sum+=a[i];
    }
      printf("\nthe sum od an arry is %d", sum);
    return 0;
}*/

/*
#include <stdio.h>

int main(void)
{
    int a[]= {1,2,3,4,5},b[]= {6,7,8,9,10};
     int i, j, sum= 0;
      
    for(i=0; i<5; i++){                                     //     sum = 5*(sum of a) + 5*(sum of b)
                                                                  //   = 5*15 + 5*40
                                                                  //   = 75 + 200
                                                                 //    = 275

        for(j=0; j<5; j++){

            sum += a[i]+b[j];
        }
    }printf("\nthe sum  an arry is %d", sum);
    return 0;
}*/
/*
#include <stdio.h>
int arr[]= {3,5,2,8,9};
int i, max;
int main(void)
{   
    max = arr[0];
for(int i = 1; i < 5; i++)
    if(arr[i] > max) max = arr[i];      // here   first the number  0th number stored in mar then it is compared
                                          // with the  list of numbers  comming fron loop then  fpr every numbern stored in max 
                                        
    printf(" the maximuim number of this  arry is %d", max);
    return 0;
}*/

/*
#include <stdio.h>

int main(void)
{
    int arr[5] = {9, 8, 3, 2, 1};
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; #include <stdio.h>

int main(void)
{
    int arr[5] = {9, 8, 3, 2, 1};
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("The minimum number of this array is %d\n", min);
    return 0;
}; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("The minimum number of this array is %d\n", min);
    return 0;
} 
*/