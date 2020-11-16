#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,l=0;
  char ch[10];

  printf("Enter the string:");
  scanf("%s",ch);

  for(i=0;ch[i]!='\0';i++)
  l++;
  
  printf("\nReverse of string is:");
  for(i=0;j=l-1;i<j;i++,j--)
   {
     char c;
     c=ch[i];
     ch[i]=ch[j];
     ch[j]=c;
   }
   printf("%s",ch);
}

