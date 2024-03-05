#include<stdio.h>

int i(int);
int n;
int palindrome;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &n);
    
    palindrome = i(n);
    
    if(palindrome == 1)
        printf("\n%d is palindrome", n);
    else
        printf("\n%d is not palindrome", n);

    return 0;
}

int i(int j)
{
    int sum = 0;
    if(j != 0)
    {
        sum = sum *10 + j%10;
        i(j/10);   
    }
    else if(sum == n)
        return 1;
    else
        return 0;
}
