#include "7_book.h"

int main()
{
    Book emo_int{ISBN{111, 111, 111, "111"}, "Emotional Intelligence",
                 "Danitel Goleman", Genre::nonfiction, "September 27, 2005"};
    Book prog_princ{ISBN{222, 222, 222, "222"}, "Programming: Principles and Practice Using C++",
                    "Bjarne Stroustrup", Genre::nonfiction, "May 15, 2014"};
    cout << emo_int;
}