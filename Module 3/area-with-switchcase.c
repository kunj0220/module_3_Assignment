#include<stdio.h>
int main()
{  
       int h,w,l,r,b;
       char choice;
       
        printf("enter 'T' for triangle \nenter 'R' for rechtangle  \nenter 'C' for circle\n ");
        scanf("%c",&choice);
        
     switch(choice)	
     {
	 
	 case 'T':
	 	      printf("enter height of triangle\n");
	 	      scanf("%d",&h);
	 	      printf("enter base of triangle\n");
	 	      scanf("%d",&b);
	 	      
	 	      printf("area of triangle is %f",0.5*h*b);
	 	      break;	      
	 
	 case 'C':
	 	      printf("enter radious of circle\n");
	 	      scanf("%d",&r);
	 	      
	 	      printf("area of circle is %.2f",3.14*r*r);
	 	      break;	      
	
	 case 'R':
	 	      printf("enter width of rechtangle\n");
	 	      scanf("%d",&w);
	 	      printf("enter length of rechtangle\n");
	 	      scanf("%d",&l);
	 	      
	 	      printf("area of rechtangle is %f",w*l);
	 	      break;
	 	      
	 default:
	 	     printf("\ninvalid choice");
    }
	return 0;
}
