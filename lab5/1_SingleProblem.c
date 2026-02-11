#include <stdio.h>

/*
Write a program to input and display the elements of a 1D array and count the frequency of each unique element and determine:
1. H as the highest frequency count of any element.
2. L as the lowest frequency count of any element.

I. Count D as D = H + L
II. Find and display the Dth palindrome number in the range 10 to 1001.
*/

int main()
{
    int n;

    printf("Enter the number of elements in array : ");
    scanf("%d", &n);

    int arr[n];
    int unique[n];
    int freq[n];
    int num_unique = 0;
    int is_unique = 1;
    int i,j;

    // Taking input of the array and finding number of unique elements
    printf("Enter the Elements of array :\n");
    for(i = 0; i < n; i++)
    {
        is_unique = 1;
        scanf("%d", &arr[i]);

        for(j = 0; j < i; j++ )
            if(arr[i] == arr[j])
            {
                is_unique = 0;
                break;
            }


        if(is_unique == 1)
        {
            freq[num_unique] = 0;
            unique[num_unique] = arr[i];
            num_unique++;
        }
    }


    // Displaying array
    printf("\n\n");
    printf("Array : ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);



    // Counting frequency
    int H = 0;
    int L = n;
    int bH = 0;
    int bL = n;
    for(j = 0; j < num_unique; j++)
    {
        for(i = 0; i < n; i++)
            if(unique[j] == arr[i])
                freq[j]++;

        if(H < freq[j])
            H = freq[j];
        if(L > freq[j])
            L = freq[j];
    }

    // Displaying frequency
    printf("\n\n");
    printf("Frequency of Unique Elements :\n");
    for(i = 0 ; i < num_unique; i++)
        printf("%d : %d times\n", unique[i], freq[i]);

    int D = H + L;
    printf("\n\n");
    printf("H : %d\n", H);
    printf("L : %d\n", L);
    printf("D : %d\n", D);

    // Palindrome number
    printf("\n\n");
    int curr_palindrome = 0;
    for(i = 10; i < 1001; i++)
    {
        int temp = i;
        int rev = 0;
        while(temp != 0)
        {
            rev = rev * 10 + temp %10;
            temp  /= 10;
        }

        if(rev == i)
            curr_palindrome++;

        if(curr_palindrome == D)
        {
            printf("%d th palindrome : %d\n\n",D, i);
            return 0;
        }
    }

    printf("No available %d th palindrome within range 10 - 1001\n\n", D);
}
