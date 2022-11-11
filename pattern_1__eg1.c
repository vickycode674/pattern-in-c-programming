#include <stdio.h>

//creating a reverse triangle with using stars
int main()
{
int i,j;

      for(i=1;i<=5;i++)
    {
       for(j=1;j<=5;j++)
         {
           if((i+j)<=5) //these logic helps to print inverted traingles from left and right 
             {
               printf("*");
             }

            else
             {
              printf("");
             }
         } 
         printf("\n");  
    }
 return 0;
}
