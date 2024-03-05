#include<stdio.h>

void copy(char str2[100], char str1[100]);


int main()
{
 char str1[100], str2[100];
 int i;

 printf("Enter string:\n");
 fgets(str1,sizeof str1,stdin);
 
 copy(str2, str1);
 
 printf("Copied string is: %s", str2);
 
 return 0;
}

void copy(char str2[100], char str1[100])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}
