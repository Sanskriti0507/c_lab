#include<stdio.h>

struct book
{
int bookid;
char author[50];
char title[50];
int price;
};

void bookfun(struct book x){
    printf("ID: %d\n", x.bookid);
    printf("Author: %s\n", x.author);
    printf("Title: %s\n", x.title);
    printf("Price: %d\n", x.price);
}

int main(){
    struct book x;

    printf("Enter book Id: ");
    scanf("%d", &x.bookid);

    printf("Enter Author: ");
    scanf("%s", &x.author);

    printf("Enter Title: ");
    scanf("%s", &x.title);

    printf("Enter Price: ");
    scanf("%d", &x.price);

    bookfun(x);

    return 0;
}

