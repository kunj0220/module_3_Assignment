#include<stdio.h>
void add();
int main()
{
	add();
	return 0;
}
void add()
{
	int n,t1=0,t2=1,t3=t1+t2,i;
	
	printf("enter number:");
	scanf("%d",&n);
	
	printf("%d \t%d\t %d",t1,t2,t3);
	
	for(i=1;i<=n-3;i++)
	{
	  t1=t2;
	  t2=t3;
	  t3=t1+t2;
	  printf("\t%d",t3);	
	}
}
