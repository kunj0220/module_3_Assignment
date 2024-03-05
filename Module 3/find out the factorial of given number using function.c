#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add ()
{
	int n,i,f=1;
    
    printf("enter number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    	f = f*i;
	}
   
    printf("factorial of %d is %d",n,f);
}
