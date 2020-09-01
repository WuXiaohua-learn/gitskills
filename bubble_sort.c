#include <stdio.h>


void bubble_sort(int arr[],int len)
{
   int i,j,temp;
   for(i = 0; i < len-1; i++)
   {
      for(j = 0;j < len-1-i;j++)
      {
          if(arr[j] > arr[j+1])
          {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }

   }

}


void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}


void select_sort(int arr[],int len)
{
   int i,j;
   for(i=0;i<len-1;i++)
   {
      int min = i;
      for(j=i+1;j<len;j++)
      {

         if(arr[j] < arr[min])
         {
            min = j; 
         }
      }
      swap(&arr[i],&arr[min]); 
   }
}
int main()
{
   int array[] = {22,34,3,32,82,55,89,50,37,5,64,35,9,70};
   int len = (int) sizeof(array)/sizeof(array[0]);
   //bubble_sort(array,len);
   select_sort(array,len); 
   int i;
   for(i=0;i<len;i++)
   {
      printf("array[%d] = %d\n",i,array[i]);
   }
}
