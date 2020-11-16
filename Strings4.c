#include<stdio.h>
#include<string.h>
void main()
{
  int i,cv=0,cc=0;
  char ch[20];

  printf("\nEnter string:");
  gets(ch);
  
  for(i=0;ch[i]!'\0';i++)
    {
      if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||
         ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')

      cv++;

      else
      cc++;
    }

      printf("\nVowels:%d \nConsonents:%d",cv,cc);
}
