#include "../../std_lib_facilities.h"



class Money {
public:
    long int cents() const { return m_cents };
    Money
private:
    long int m_cents;
};

ostream& operator<<(ostream& os, const Money& money)
{
    string str_money = to_string(money.cents())
    os << "$" << str_money
}

int main()
{
    
}