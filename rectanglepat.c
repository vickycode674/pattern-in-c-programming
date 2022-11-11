#include <stdio.h>
//**************************programe to print a rectangle************************************************ 
int main()
{
int i,j;
for(i=0;i<5;i++) //rows 
{
for(j=0;j<5;j++) //cols   (if the condition of j>1 do not work then how can it increemnet to j=1);
{

if(i==0 ||  i==4 || j==0 || j==4)
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
return 0;
}