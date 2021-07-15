#include "../../std_lib_facilities.h"

void stack_grow(int* address)
{
    int stack_grow_local;
    cout << "main var address: " << reinterpret_cast<size_t>(address) << "\tfunc var address: " << reinterpret_cast<size_t>(&stack_grow_local) << '\n';
    stack_grow(&stack_grow_local);
}

int main()
{
    int main_local;
    stack_grow(&main_local);
    
}