#include "../../std_lib_facilities.h"

class ISBN {
public:
    ISBN(int group, int publisher, int title, string chk_dig);
    string isbn() const { return m_isbn; }
private:
    string m_isbn;
};

ISBN::ISBN(int group, int publisher, int title, string chk_dig)
{
    m_isbn += to_string(group);
    m_isbn += "-";
    m_isbn += to_string(publisher);
    m_isbn += "-";
    m_isbn += to_string(title);
    m_isbn += "-";
    m_isbn += to_string(chk_dig);
}

class Book {
public:
    Book(ISBN isbn_code, string title, string author, string copyright_date);
    string isbn() const { return m_ISBN; }
    string title() const { return m_title; }
    string author() const { return m_author; }
    string copyright_date() const { return m_copyright_date; }
    bool checked() const { return m_checked; }
    // check if a book is in (true) or out (false) of the library
    void book_in() { m_checked = true; }
    void book_out() { m_checked = false; }
private:
    string m_ISBN;
    string m_title;
    string m_author;
    string m_copyright_date;
    bool m_checked;
};

Book::Book(ISBN isbn_code, string title, string author, string copyright_date)
:m_ISBN(isbn_code.isbn()), m_title(title), m_author(author),
m_copyright_date(copyright_date)
{
}