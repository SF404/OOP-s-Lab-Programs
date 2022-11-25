// --------------Complex Number (Operations) -------------
#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real1, imaginary1;
    int real2, imaginary2;

public:
    Complex();
    void sum();
    void product();
    void difference();
};
Complex::Complex()
{
    cout << "Enter real value of complex 1: ";
    cin >> real1;
    cout << "Enter imaginary value of complex 1: ";
    cin >> imaginary1;
    cout << "Enter real value of complex 2: ";
    cin >> real2;
    cout << "Enter imaginary value of complex 2: ";
    cin >> imaginary2;
}
void Complex::sum()
{
    cout << real1 + real2 << " + " << imaginary1 + imaginary2 << "i\n";
}
void Complex::difference()
{
    cout << real1 - real2 << " + " << imaginary1 - imaginary2 << "i\n";
}
void Complex::product()
{
    cout << (real1 * real2) - (imaginary1 * imaginary2) << " + " << (real1 * imaginary1) + (real2 * imaginary2) << "i\n";
}
int main()
{
    Complex c1;
    c1.sum();
    c1.difference();
    c1.product();

    return 0;
}