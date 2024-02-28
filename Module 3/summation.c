#include<stdio.h>
int main()
{
	int n , sum;
	
	printf("enter number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		sum = sum+n%10;
		n = n/10;
	}
	printf("summation of given number is %d",sum);
	
	return 0;
}
