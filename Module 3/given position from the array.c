#include<stdio.h>
int main()
{
	char str[100];
	int pos;
	printf("enter string: ");
	scanf("%s",&str);
	
	printf("enter position: ");
	scanf("%d",&pos);
	
	printf("the position of %d = %c",pos,str[pos]);
	
	
	
	return 0;
}
