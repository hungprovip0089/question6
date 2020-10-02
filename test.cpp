#include<iostream>
#include<math.h>
#include <bits/stdc++.h> 
using namespace std;
class Book
{
private:
    char* title;
    char* authors;
    int publishingYear;

public:
    Book()
    {
        title = NULL;
        authors = NULL;
        publishingYear = 0;
    }

    Book(const char* title, const char* authors, int publishingYear)
    {
        this->title = new char[99];
        this->authors = new char[99];
        strcpy(this->title, title);
        strcpy(this->authors, authors);
        this->publishingYear = publishingYear;
    }

    Book(const Book &book)
    {
        this->title = new char[99];
        this->authors = new char[99];
        strcpy(this->title, book.title);
        strcpy(this->authors, book.authors);
        this->publishingYear = book.publishingYear;
    }
    
    void setTitle(const char* title)
    {
        this->title = new char[99];
        strcpy(this->title, title);
    }

    void setAuthors(const char* authors)
    {
        this->authors = new char[99];
        strcpy(this->authors, authors);
    }

    void setPublishingYear(int publishingYear)
    {
        this->publishingYear = publishingYear;
    }

    char* getTitle() const
    {
        return this->title;
    }

    char* getAuthors() const
    {
        return this->authors;
    }

    int getPublishingYear() const
    {
        return this->publishingYear;
    }

    ~Book()
    {
        delete this->authors;
        delete this->title;

    }

    void printBook(){
        printf("%s\n%s\n%d", this->title, this->authors, this->publishingYear);
    }
    // friend bool checkAuthor(Book book, const char* author)
    // {
    //     int size = strlen(book.getAuthors());
    //     char *authors = new char[size+1];
    //     strcpy(authors, book.getAuthors());

    // }
};

int main(){
Book book1("Giai tich 1","Nguyen Dinh Huy",2000);
Book book2 = book1;
book2.printBook();
    return 0;
}