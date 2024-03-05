#include<stdio.h>
int main()
{ 
   int i,j,temp=1;
   
    for(i=1;i<=4;i++)
   {
   	for(j=1;j<=i;j++)
	   {
   		printf("%d\t",temp);
   		temp++;
	   }
	   printf("\n\n");
   }

	
	
	return 0;
}
