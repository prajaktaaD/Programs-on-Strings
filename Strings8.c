

#include<stdio.h>
#include<string.h>
void main()
{
  int i,j;
  char ch1[20],ch2[20];
  
  printf("\nEnter string1");
  scanf("%s",ch1);

  printf("\nEnter string2");
  scanf("%s",ch2);

  for(i=0;ch1[i]!='\0';i++);
  for(j=0;ch2[j]!='\0';j++)
   {
     ch1[i]=ch2[j];
     i++;
   }
   
    ch1[i]='\0';
    printf("\nNew Concatinated string:%s\n",ch1);
}

