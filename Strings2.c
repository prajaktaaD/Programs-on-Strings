#include<stdio.h>
void main()
{

  char ch1[20],ch2[20];
  int i;

  printf("\nEnter string 2:");
  scanf("%s",ch2);

  printf("\nCopied string2 to string1");
  for(i=0;ch2[i]!='\0',i++)
  ch1[i]=ch2[i];

  ch1[i]='\0';

  printf("%s",ch1);
}
