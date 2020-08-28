#include <stdio.h>

/*d定义两个全局变量*/
int x = 1;
int y = 2;

int addtwonumFunction();
int main()
{
   int result;
   result = addtwonumFunction();
   printf("result = %d",result);
   return 0;
}
