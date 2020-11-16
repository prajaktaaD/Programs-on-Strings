#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,n;
  char ch1[20],ch2[20],ch3[20];
  
  for(i=0;ch1[i]!='\0';i++)
    {
      ch3[i]=ch1[i];
    }

  printf("\nEnter String2:");
  scanf("%s",ch2);

  printf("\nEnter the position u want to concatinate:");
  scanf("%d",n);

  for(i=0;i<n-1;i++);
  for(j=0;ch2[j]!='\0';j++)
   {
     ch1[i]=ch2[j];
     i++;
   }
   ch1[i]='\0';

   for(i=0;ch1[i]!='\0';i++);
   for(j=n;ch3[j]!='\0';j++);
    {
      ch1[i]=ch3[j];
      i++;
    }
  ch1[i]='\0';

  printf("\nNew Concatinated string:%s"ch1);
}
