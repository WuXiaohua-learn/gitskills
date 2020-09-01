#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   char name[20];
   char *des = (char*)malloc(100 * sizeof(char));
   
   strcpy(name,"yongzhuangchuxu");
   
   if(des == NULL)
   {
      fprintf(stderr,"Error-unable to allocate required memory\n");

   }
   if(des != NULL)
   {
      strcpy(des,"adfadfsaasfdadadfsafa");
   }
   printf("name = %s,des = %s",name,des);
   free(des);
}
