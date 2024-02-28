#include<stdio.h>
int main()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	
	printf("Enter mark of 1st subject_");
	scanf("%d",&m1);
	
	printf("Enter mark of 2nd subject_");
	scanf("%d",&m2);
	
	printf("Enter mark of 3rd subject_");
	scanf("%d",&m3);
	
	printf("Enter mark of 4th subject_");
	scanf("%d",&m4);
	
	printf("Enter mark of 5th subject_");
	scanf("%d",&m5);
	
	int total=m1+m2+m3+m4+m5;
	printf("Total mark is%d",total);
	
    float pr=total*100/500;
    printf("\nparcentage is %f\n",pr);
    
    if(pr>75)
    {
    	printf("Distinction");
	}
    else if(pr>60 && pr<=75)
    {
    	printf("First class");
	}
	else if (pr>50 && pr<=60)
    {
    	printf("Second class");
	}
	else if(pr>35 && pr<=50)
	{
		printf("pass class");
	}

	else
	{
		printf("Fail");
	}
	
	return 0;
}
