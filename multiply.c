#include <stdio.h>

int multiply(int x, int y)
{
   if(y ==0)
   {
       return 0;
   } 
   int z = multiply(x, y/2);
   if (y%2 == 0)
   {
       return z+z;
   }
   else 
   {
       return x+z+z;
   }
}

int main()
{
    printf("%d", multiply(10,6));
}