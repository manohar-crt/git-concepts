/*

#include <stdio.h>

int main(void)
{
    int (*ptr)[10];  // pointer to an array of 10 integers
    int arr[10];     // an array of 10 integers
    ptr = &arr;       // make ptr point to arr
    for (int i = 0; i < 10; i++) {
        (*ptr)[i] = i + 1; // assign values to the array using the pointer
    }
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
//int *ptr[10]; ---> array of 10 pointers to integers
//int (*ptr)[10]; ---> pointer to an array of 10 integers
// here in both we need 2nd one an pointer pointing to an array of 10 integers because we want to access the elements of the array using the pointer.
//here  presedence of [] is greater than  the * hence wen use  () to change the precedence and make it pointer to an array of 10 integers.

#include <stdio.h>

int main(void)
{int results;
    int (*ptr)(int, int) = &add;
    results = *ptr(10, 20);
    printf("The result is: %d\n", results);
    return 0;
}
            OS

int main(void)
{int results;
    int (*ptr)(int, int) = add;
    results = ptr(10, 20);
    printf("The result is: %d\n", results);
    return 0;
}

#include <stdio.h>
float sum(float a, float b){ return a + b;}
float sub(float a, float b){ return a - b;}
float mul(float a, float b){ return a * b;} 
float div(float a, float b){ return a / b;}

int main(void)  
{
    int choice;
    float a,b, result;
    printf("enter your choice : 1 for sum , 2 for sub , 3 for mul , 4 for div\n: ");
    scanf("%d", &choice);
    printf("enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice){
        case 1:
            result = sum(a, b);
            break;
        case 2:
            result = sub(a, b);
            break;
        case 3:
            result = mul(a, b);
            break;
        case 4:
            result = div(a, b);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }
    printf("The result is: %f\n", result);
    return 0;
}*/

//Designing a calculator program using function pointers
/*
#include <stdio.h>
#define ops 4

float sum(float a, float b)  { return (a+b); }
float sub(float a, float b)  { return (a-b); }
float mult(float a, float b) { return (a*b); }
float divi(float a, float b) { return (a/b); }

int main() {
    float (*ptr2func[ops])(float, float) = {sum, sub, mult, divi};
    int choice;
    float a, b;
    printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div:\n");
    scanf("%d", &choice);
    printf("Enter the two numbers:\n");
    scanf("%f %f", &a, &b);
    printf("%f", ptr2func[choice](a, b));
    return 0;
} */
