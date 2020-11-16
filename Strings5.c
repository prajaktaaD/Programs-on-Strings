#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,uc;
  char ch[20],ch2[20];

  printf("\nEnter String:");
  //scanf("%s",ch);  //single word
  gets(ch);          //Entire sentense

  printf("The string in upper case:");
  for(i=0;ch[i]!=0;i++)
   {
     if(ch[i]>'a'&&ch[i]<'z')
     ch2[i]=ch[i]-32;

     else
     ch2[i]=ch[i];
   }
  //printf("%s",ch2)  //single word
  puts(ch2);         //entire sentense
}

