#include <stdio.h>

int x;
int y;

//函数外定义变量x和y
int addtwonum()
{
   extern int x;
   extern int y;
   //函数内声明变量x和y为外部变量
   
   x = 1;
   y = 2;
   return x + y;
}

int main()
{
   int result;
   result = addtwonum();
   printf("result = %d",result);
   return 0;
}
