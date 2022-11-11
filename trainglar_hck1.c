#include <stdio.h>

int main()
{
 int n,i,j,k,l;
 printf("enter the size u want to enter:");
 scanf("%d",&n);

 for(i=1;i<=n;i++) //for creating / passing loop to downwards
  {
   for(k=n;k>=i;k--)  //print the required gaps in traingle
    {
     printf(" ");
    }
  for(j=1;j<=i;j++)  //printing the out of gaps with numbers
   {
    printf("%d",j);
   }
  for(l=j-2;l>0;l--)  //critical points to managing elements
  printf("%d",l);
  printf("\n");
  }
  return 0;

}