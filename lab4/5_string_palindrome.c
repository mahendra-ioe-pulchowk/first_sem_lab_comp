#include <stdio.h>


int main()
{
    char str[30];
    printf("Enter the string (less than 30 characters): ");
    gets(str);

    int i = 0;
    int len = 0;
    while(str[i] != '\0')
    {
        len++;
        i++;
    }



    int palindrome = 0;
    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len - 1- i])
        {
            palindrome = -1;
            break;
        }
    }

    if(palindrome == 0) {
        printf("%s : Palindrome\n", str);
    } else {
        printf("%s : Not Palindrome\n", str);
    }






}
