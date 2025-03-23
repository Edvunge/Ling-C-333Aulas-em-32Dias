#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int id;
};

void addBook(struct Book books[], int *n, struct Book b) {
    books[*n] = b;
    (*n)++;
}

void searchBook(struct Book books[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            printf("Found: Title: %s, Author: %s, ID: %d\n", books[i].title, books[i].author, books[i].id);
            return;
        }
    }
    printf("Book not found\n");
}

int main() {
    struct Book books[100];
    int n = 0;
    struct Book b;
    int choice;
    int id;

    while(1) {
        printf("1. Add Book\n2. Search Book\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter title: ");
                scanf("%s", b.title);

                printf("Enter author: ");
                scanf(" %s ", b.author);

                printf("Enter ID: ");
                scanf("%d", &b.id);

                addBook(books, &n, b);
                break;
            case 2:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchBook(books, n, id);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}

