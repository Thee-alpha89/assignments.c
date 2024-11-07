//structure
#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int year;
	char ISBN[13];
	float price;
}book;
//struct book
int main(){
	strcpy(book.title,"Introduction to C Programming");
strcpy(book.author,"John Smith");
strcpy(book.ISBN,"9780131103627");
book.year=2022;
book.price=49.99;
printf("title:%s\n",book.title);
printf("author:%s\n",book.author);
printf("year:%d\n",book.year);
printf("ISBN:%s\n",book.ISBN);
printf("price:%f\n",book.price);
return 0; 
}