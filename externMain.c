#include <stdio.h>

extern int count;
extern void write_extern();

int main()
{
   write_extern();
   printf("count = %d", count);

}

