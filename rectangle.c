#include <stdio.h>

int main()
{
int i,j,n=5,k=8;

 for(i=0;i<n;i++)
{
   for(j=0;j<k;j++)
  {
    if(i==0 || i==n-1|| j==0 || j==k-1)
    {
    printf("*");
    }
else
printf(" ");
  }
printf("\n");
}
return 0;
}
