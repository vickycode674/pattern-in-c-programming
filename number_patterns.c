#include <stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++) //rows 
 {
 for(j=1;j<=i;j++)
  {
   printf("%d",j);
  }
  printf("\n");
 }

 for(i=5;i>=1;i--)
 {
  for(j=4;j<=i;j++) //gotcha that j must be increased irrespective of rows arrangement condion differs
  {
   printf("%d",j);
  }
  printf("\n");
 }
 return 0;
}