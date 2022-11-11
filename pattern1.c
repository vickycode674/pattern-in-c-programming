#include <stdio.h>

int main()
{
int i,j;
for(i=0;i<3;i++) //rows 
{
for(j=0;j<i;j++) //cols   (if the condition of j>1 do not work then how can it inreemnet to j=1);
{
printf("*");
}
printf("\n");
}

for(i=3;i>0;i--) //rows 
{
for(j=i;j>0;j--) //cols   (if the condition of j>1 do not work then how can it inreemnet to j=1);
{
printf("*");
}
printf("\n");
}
return 0;
}

//*********************pattern for  finding right half pyramid************************************************************
/*
int main()
{
int i,j,k;
for(i=0;i<5;i++) //rows 
{
for(j=i;j<5;j++) //cols  
 {
printf(" ");
 }
for(k=0;k<i;k++) //at first condtion it doesnt happend due to its cond failure and then automatically happens
{
printf("*");
}
printf("\n");
}
return 0;
} */
