#include <iostream>
#include <math.h>

int main(void)
{
    double          r;
    unsigned int    principal;
    double          paymentsYear;
    double          time;
    double          num, den;
    double          payment;
    double          b, e;

    std::cout << "Enter the principal amount";
    std::cin >> principal;
    std::cout << "Interest Rate: ";
    std::cin >> r;
    std::cout << "Payments per year: ";
    std::cin >> paymentsYear;
    std::cout << "number of years: ";
    std::cin >> time;

    num = r * (principal / paymentsYear);
    b = 1 - ((r / paymentsYear) + 1);
    e = -(paymentsYear * time);
    den = std::pow(b,e);
    payment = num / den;

    std::cout << "Payment is: " << payment;
}