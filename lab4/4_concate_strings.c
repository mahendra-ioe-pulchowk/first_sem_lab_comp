#include <stdio.h>



int main()
{
    char str1[30];
    char str2[30];
    char str3[60];

    printf("Enter the strings (less than 30 characters long):\n");
    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);

    int i = 0, j =0, k = 0;
    while(i != -1)
    {

        if(str1[j] != '\0')
        {
            str3[i] = str1[j];
            j++;
        }
        else if(str2[k] != '\0')
        {
            str3[i] = str2[k];
            k++;
        } else {
            break;
        }
        i++;
    }

    str3[i] = '\0';

    printf("Concatednated String: %s\n", str3);


}
