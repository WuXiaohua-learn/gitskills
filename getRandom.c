#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* getRandom()
{

    static int r[10];
   int i;
   srand((unsigned)time(NULL));
   for(i = 0;i<10;i++)
   {
       r[i] = rand();
       printf("r[%d] = %d\n",i,r[i]);
   }
   return r;
}

int main()
{
   int* p;
   
   p = getRandom();
   int j;
   for(j = 0; j < 10; j++)
   {
       printf("*(p+%d) = %d\n",j,*(p+j));
   }
   return 0;
}


