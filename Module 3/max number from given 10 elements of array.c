#include <stdio.h>

int main()
{
    int array[100];
	int i,j;

    printf("Enter 10 numbers:");
    
    for(i=0;i<10;i++)
	{
        scanf("%d", &array[i]);
    }
    
    j=array[0];

    for (i=1; i<10; i++) 
	{
        if (array[i] >j) 
		{
            j=array[i];
        }
    }

    printf("The maximum number is: %d\n",j);

    return 0;
}

