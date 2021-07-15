#include "6_book.h"

int main()
{
    Book emo_int{ISBN{111, 111, 111, "111"}, "Emotional Intelligence",
                 "Danitel Goleman", "September 27, 2005"};
    Book prog_princ{ISBN{222, 222, 222, "222"}, "Programming: Principles and Practice Using C++",
                    "Bjarne Stroustrup", "May 15, 2014"};
    cout << "is equal? emo_int == prog_pric: " << (emo_int == prog_princ) << '\n';
    cout << "is diferent? emo_int != prog_pric: " << (emo_int != prog_princ) << '\n';
    Book emo_int2 = emo_int;
    cout << "is equal? emo_int == emo_int2: " << (emo_int == emo_int2) << '\n';
    cout << "is diferent? emo_int != emo_int2:" << (emo_int != emo_int2) << '\n';
    cout << emo_int;
    cout << prog_princ;
}