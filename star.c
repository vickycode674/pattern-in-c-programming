#include<stdio.h>

int main()
{
int rows=3,cols=5,i,j;

for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
}