#include<stdio.h>
#include<string.h>

void main()
{
  int i,c1=0,c2=0,f=0;
  char ch1[20],ch2[20];

  printf("\nEnter String1:");
  scanf("%s",ch1);

  printf("\nEnter String2:");
  scanf("%s",ch2);
  
  for(i=0;ch1[i]!=0;i++)
  c1++;

  for(i=0;ch2[i]!=0;i++)
  c2++;

  if(c1==c2)
   {
     for(i=0i<c1;i++)
      {
        if(ch1[i]==ch2[i])
          {
            f++;
            break;
          }
       }
     if(f==c1)
     printf("\nBoth are same");

     else
     printf("\nBoth are not same");
    }

   else
   printf("\nStrings doesn't have equal length");
}

