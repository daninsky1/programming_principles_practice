#include "7_book.h"
#include "8_patron.h"

// TODO: need to test
class Library {
    struct Transaction {
        Patron p; Book b;
        Transaction(Book& bb, Patron& pp) :b{bb}, p{pp} { }
    };
public:
    void add_books(Book b);
    void add_patron(Patron p);
    void chkout_book(Book b, Patron p);
private:
    vector<Book> m_books;
    vector<Patron> m_patrons;
    vector<Transaction> m_transactions;
};

void Library::add_books(Book b)
{
    for (const Book& book : m_books) {
        if (book == b) return;      // check if a book is already in lib if is don't add
    }
    m_books.push_back(b);
}

void Library::add_patron(Patron p)
{
    for (const Patron& patron : m_patrons) {
        if (patron.card_number() == p.card_number()) return;      // check if a patron is already in lib if is don't add
    }
    m_patrons.push_back(p);
}

void Library::chkout_book(Book order_book, Patron request_patron)
{
    // check both book and patron if they are in library
    bool p_exist = false;
    for (const Patron& patron: m_patrons) {
        if (request_patron.card_number() == patron.card_number()) {
            p_exist = true;
            break;
        }
    }
    if (!p_exist) error("Error. The patron are not signed to the library.");
    bool ob_exist = false;      // order book exist in library?
    Book *lib_book;             // library book pointer
    for (int i = 0; i < m_books.size(); i++) {
        if (order_book == m_books[i]) {
            ob_exist = true;
            lib_book = &m_books[i];
            break;
        }
    }
    if (!ob_exist) error("Error. The library doesn't have this book.");
    // check if patron has a pending fee
    for (const Transaction& trans : m_transactions) {
        if (trans.p.card_number() == request_patron.card_number()) error("Error. The patron has a fee pending.");
    }
    // check if the book is already checkout
    if (lib_book->checked()) error("Error. The book is checked out.");
    lib_book->book_out();   // mark the book in the library as checked out
}

