#include <stdio.h>

int reverse(int num);
int isPalindrome(int num);

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    
    return 0;
}

