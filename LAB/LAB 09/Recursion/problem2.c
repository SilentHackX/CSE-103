#include<stdio.h>
#include<stdio.h>

typedef struct
{
    char tittle[100];
    char author[100];
    float price;
}Book;


    int main(){

    Book book1,book2,book3,book4,book5;





    printf("Enter the book1 :\n");
    printf("Enter the book tittle :\n");
    scanf("%s",&book1.tittle);

    printf("Enter the book author :\n");
    scanf("%s",&book1.author);

    printf("Enter the book price :\n");
    scanf("%f",&book1.price);

    printf("Enter the book2 :\n");
    printf("Enter the book tittle :\n");
    scanf("%s",&book2.tittle);

    printf("Enter the book author :\n");
    scanf("%s",&book2.author);

    printf("Enter the book price :\n");
    scanf("%f",&book2.price);

    printf("Enter the book3 :\n");
    printf("Enter the book tittle :\n");
    scanf("%s",&book3.tittle);

    printf("Enter the book author :\n");
     scanf("%s",&book3.author);

    printf("Enter the book price :\n");
     scanf("%f",&book3.price);

    printf("Enter the book4 :\n");
    printf("Enter the book tittle :\n");
     scanf("%s",&book4.tittle);

    printf("Enter the book author :\n");
     scanf("%s",&book4.author);

    printf("Enter the book price :\n");
     scanf("%f",&book4.price);

    printf("Enter the book5 :\n");
    printf("Enter the book tittle :\n");
     scanf("%s",&book5.tittle);

    printf("Enter the book author :\n");
     scanf("%s",&book5.author);

    printf("Enter the book price :\n");
     scanf("%f",&book5.price);

    Book mostExpensiveBook = book1;
    if (book2.price > mostExpensiveBook.price)
        mostExpensiveBook = book2;
    if (book3.price > mostExpensiveBook.price)
     mostExpensiveBook = book3;
    if (book4.price > mostExpensiveBook.price)
     mostExpensiveBook = book4;
    if (book5.price > mostExpensiveBook.price)
    mostExpensiveBook = book5;






    Book mostCheapestBook = book1;
    if (book2.price < mostCheapestBook.price)
        mostCheapestBook = book2;
    if (book3.price < mostCheapestBook.price)
    mostCheapestBook = book3;
    if (book4.price < mostCheapestBook.price)
    mostCheapestBook = book4;
    if (book5.price < mostCheapestBook.price)
    mostCheapestBook = book5;


    printf("most expensive book display : \n");
    printf("tittle %s\n", mostExpensiveBook.tittle);
    printf("author %s\n", mostExpensiveBook.author);
    printf("price %.2f\n", mostExpensiveBook.price);


    printf("most CheapestBook book display : \n");
    printf("tittle %s\n", mostCheapestBook.tittle);
    printf("author %s\n", mostCheapestBook.author);
    printf("price %.2f\n", mostCheapestBook.price);

    return 0;

}
