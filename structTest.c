#include <stdio.h>
#include <string.h>

typedef struct Book1
{
   char title[20];
   char author[20];
   char subject[20];
   int id;
}Book;

void printfBookInfo(Book *book1)
{
   printf("book.title:%s\n",book1->title);
   printf("book.author:%s\n",book1->author);
   printf("book.subject:%s\n",book1->subject);
   printf("book.id:%d\n",book1->id);

}

int main()
{
   Book book;
   strcpy(book.title,"C yuyan");
   strcpy(book.author,"tanheqiang");
   strcpy(book.subject,"bianchengyuyan");
   book.id = 123456;
   printfBookInfo(&book);
   return 0;
}

