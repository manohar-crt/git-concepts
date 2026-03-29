/*
#include <stdio.h>

int main(void)
{
   int arr[5]= {1,2,3,4,5};
   int i;
    for(i=4; i>=0; i--){                                     /*➡️ If printing SMALL to BIG → use i++ and <
                                                               ⬅️ If printing BIG to SMALL → use i-- and >=
                                                               ⬅️ Decreasing (High to Low) → condition always ends at 0
                                                               ➡️ Increasing (Low to High) → condition always ends at size
                                                               */

 //       printf(" %d", arr[i]);
 //   }
  //    return 0;


//}/*


/*

/*

#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int i;

    printf("Even numbers are: ");
    for(i = 0; i < 6; i++){
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers are: ");
    for(i = 0; i < 6; i++){
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    return 0;


#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // array size

    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);

    return 0;
}*/

/*
#include <stdio.h>

int main(void)
{ int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, num, found=0;
printf("enter ther number: ");
 scanf("%d", &num);

    for(i= 0; i<n; i++){
       if(arr[i]==num){
       printf("the number preset at index : %d", i);
        found=1;
        break;}
    }
   if(found==0){
   printf("number not found");}
    return 0;
}  */
/*

#include <stdio.h>
int main(void)
{
     int arr1[5]= {1,2,3,4,5};
     int arr2[5];
     int i, a,b;

        for(i=0; i<5; i++){
    arr2[i] = arr1[i];
           printf(" %d", arr2[i]);
        }
    return 0;
}
*/
*/