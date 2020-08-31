#include <stdio.h>
#include <stdlib.h>


//回调函数
void populate_array(int *array,size_t array_size,int (*getNextValue)(void))
{
   for(size_t i=0;i<array_size;i++)
      array[i] = getNextValue();

}

int getNextValue(void)
{
   return rand();

}

int main()
{
   int myarray[10];
   populate_array(myarray,10,getNextValue); 
   int i;
   for(i=0;i<10;i++)
   {
      printf("myarray[%d] = %d\n",i,myarray[i]);
   }
   return 0;
}
