#include<stdio.h>
void main()
{
   int i,j,l=0;
  char ch1[20],ch2[20];
  
  printf("Enter string 1:");
  scanf("%s",ch1);
 
 for(i=0;ch[i]!='\0';i++)
  l++;
 
 printf("The string in reverse order is:");
 for(i=0,j=l-1;i<l,j>=0;i++,j--)
  {
     char ch;
    ch=ch1[j];
    ch1[j]=ch;
  }
 
 printf("%s",ch2);

}
