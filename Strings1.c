#include<stdio.h>
#include<string.h>
void main()
{

  char ch[20];
  int i,c=0;

  printf("\nEnter the string:");
  scanf("%s",ch);

  for(i=0;ch[i]!='\0';i++)
  c++;

  printf("The length of string is::%d",c);
}

