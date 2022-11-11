#include<stdio.h>

int main()
{
int rows=5,space,i,j;

for(i=0;i<=rows;i++)
 {
  for(space=1;space<=(rows-i);space++)
  {
   printf(" ");
  }

  for(j=1;j<=i;j++)
  {
  printf("* ");
  }
printf(" \n ");
 } 

}
