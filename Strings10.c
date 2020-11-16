#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,l=0,f=0;
  char ch1[20];

  prinf("\nEnter string1");
  scanf("%s",ch1);

  for(i=0;ch1[i]!='\0';i++)
  l++;

  for(i=0;i<ch1[i]!='\0';i++)
  ch2[i]=ch1[i];

  for(i=0,j<l-1;i<j;i++,j--)
   {
     char ch;
     ch=ch1[i];
     ch1[i]=ch1[j];
     ch1[j]=ch;
   }
  printf("\nReverse of string:%s",ch1);

  for(i=0;i<l;i++)
   {
     if(ch1[i]==ch2[i])
     f++;
   }
     
  if(f==1)
  printf("\nPalindrome");
  
  else
  printf("\nNot Palindrome");
}  


  
  


