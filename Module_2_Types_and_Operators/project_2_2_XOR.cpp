#include <iostream>

void    xor_func(bool p, bool q)
{
    if ((p || q) && (p != q))
        std::cout << "xor " << p << " " << q << " " << 1 << "\n";
    if (p == q)
        std::cout << "xor " << p << " " << q << " " << 0 << "\n";
}


int main(void)
{
    xor_func(true, true);
    xor_func(true, false);
    xor_func(false, false);
    xor_func(false, true); 
    return (1);
}
    