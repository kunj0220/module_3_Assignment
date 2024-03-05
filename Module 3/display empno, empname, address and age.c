#include<stdio.h>
struct employe
{
	int empno;
	int age;
	char empname[100];
	char address[100];
};
int main()
{   
    int n,i;
    printf("enter number of employees.\n");
    scanf("%d",&n);
    
    struct employe e[n];
    
    for(i=0;i<n;i++)
    {
    	printf("employe %d",i+1);
    	scanf("%d %d %s %s",&e[i].empno,&e[i].age,&e[i].empname,&e[i].address);
	}
	 for(i=0;i<n;i++)
    {
    	printf("%d %d %s %s",e[i].empno,e[i].age,e[i].empname,e[i].address);
	}
	
	return 0;
}
