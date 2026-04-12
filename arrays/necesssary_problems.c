/* STRINGS 
 #  string litral r stored as  array of characters
 # string litral is equivalent to writing  the pointer to the first character of string litral
 # for printf and scanf , we r passsing a pointer to the fifrst character of a stringg literal
 # exp : "earth" = "E" bcs w senf e pointer  only then automatically array will start ffrom that address
*/
/*
#include <stdio.h>

int main(void)
{
    char *ptr = "hello world"; //here pointer stores the  adress of  first letter h in the sequence of array
       printf("%.5s\n", ptr); // here .5 means how many letters u want to print 
       printf("%6.5s", ptr);  // here 6.5 represents  . 6 means gap at start and  then 5 letters
                    // here gap means inside array {' gap','h','e','l','l','o'}
        return 0;
}
  */
// "H" is represented by a pointr to character "h"
// 'H' is represented by an integer  (ASCI code :72)

            //Declaring  a string variable
        
       /*   string variable is one dimentional array  , have a capable of storing a string ot a time
             in string variable always have a extra null var for 0
        char s[6] = "Hello";  or  char s[6] = {'H','e','l','l','o','\0'};  */
         

        /* puts() function is used to print the output in new line  and inbuilt in stdio
        like   hello
               hello

          gets() will used as scanf  while reading  sscanf  will not read white space  afer 
          but gets will try to  over write evenn though arrays  size is low                                               
                    

        #include <stdio.h>

int input(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n') // getchar() function is used to read one character  at a time from user input
    {                                 //acc to asci value
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int main()
{
    char str[100];
    int n = input(str, 5);
    printf("%d %s", n, str);  //  character --> %c  --> ' '
                                 //    string --> %s --> " "
    return 0;
} 
#include <stdio.h>

int main(void)
{
    int ch;
    for(ch = 'A'; ch <= 'Z'; ch++)
    putchar(ch);  // putchar() function accept an integer it wants to display
                  // and returns an integer representing the character written on screen
                   // it is for character not fr string
    return 0;
}  */  
/*
printf() --> print formated output
puts() expects string  --> print a string auto new line
gets expects string  --> reads string from key board 
fgets() --> safer side of gets 
putchar expect charactr
getchar expect charactr
scanf("%s") --> read a word (stop at space)
sprintf() --> write fromated string into char array
sscanf() --> read /parse from a char arrray  
strlen() --> it is used to calculate  length of the string
strcpy() -->  copys whole string  
strcat --> string concatination 
strcmp() --> string comparisson

#include <stdio.h>
#include <string.h>
int main() {
    char *fruits[] = {"2 Oranges", "2 Apples", "3 Bananas", "1 Pineapple"};
    if (strcmp(fruits[1], fruits[2]) < 0)
        printf("%s are lesser than %s", fruits[1], fruits[2]);
    else if (strcmp(fruits[1], fruits[2]) > 0)
       printf("%s are greater than %s", fruits[1], fruits[2]);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char p[20];
    char *s = "string"; // here *s which  points the first leter of an arry which then it will whole arrry 
    int length = strlen(s); // here strlen()  defines length of the string which os already declared 
    int i; 
    for(i= 0; i< length; i++){
        p[i] = s[length - i]; // here length will be ) 0 then only null char will be printed thats menas no out put 
        printf("%s", p);// wn printf see the null character it will stop the  printing 
    }
    return 0;
}*/

