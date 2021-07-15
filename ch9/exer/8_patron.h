class Patron {
public:
    string user_name() const { return m_user_name; }
    int card_number() const { return m_card_number; }
    int fee() const { return m_fee; }
    void set_fee(int price) { m_fee = price; }
private:
    string m_user_name;
    int m_card_number;
    int m_fee;
};

bool has_fee(const Patron& p)
{
    if (p.fee()) return true;
    return false;
}