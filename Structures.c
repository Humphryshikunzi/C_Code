#include <stdio.h>
#include <string.h>

void print_book_2();
void print_book_3();


struct Book
{
	char title[50];
	char author[50];
    char subject[50];
    int publicationId;

};

int main(int argc, char const *argv[])
{
	struct Book Book1;
	struct Book Book2;

	strcpy(Book1.title, "The River and The Source");
	strcpy(Book1.author, "Margret Ogolla");
	strcpy(Book1.subject, "Life and Societies");
	Book1.publicationId = 1;
	

	strcpy(Book2.title, "When The Sun Goes Down");
	strcpy(Book2.author, "Wait...");
	strcpy(Book2.subject, "Africans Abroad");
    Book2.publicationId = 2;


    printf("Book1.title         : %s\n", Book1.title );
    printf("Book1.author        :  %s\n", Book1.author);
    printf("Book1.subject       :%s\n", Book1.subject);
    printf("Book1.publicationId : %d\n\n", Book1.publicationId );
    
    print_book_2(Book2);
    print_book_3(&Book2);

	 
	return 0;
}

void print_book_2(struct Book book)
{

    printf("Book2.title         : %s\n", book.title );
    printf("Book2.author        : %s\n", book.author);
    printf("Book2.subject       : %s\n", book.subject);
    printf("Book2.publicationId : %d\n\n", book.publicationId );
}

void print_book_3(struct Book *book3)
{

    printf("Book2.title         : %s\n", book3 -> title );
    printf("Book2.author        : %s\n", book3 -> author);
    printf("Book2.subject       : %s\n", book3 -> subject);
    printf("Book2.publicationId : %d\n\n", book3 -> publicationId );
} 