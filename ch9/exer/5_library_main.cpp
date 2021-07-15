#include "5_book.h"

int main()
{
    Book emo_int{ISBN{111, 111, 111, "111"}, "Emotional Intelligence",
                       "Danitel Goleman", "September 27, 2005"};
    cout << "ISBN: " << emo_int.isbn() << '\n' << "Title: " << emo_int.title() << '\n'
         << "Author: " << emo_int.author() << '\n'
         << "Copyright date: " << emo_int.copyright_date() << "\n";
}