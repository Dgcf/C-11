#include <iostream>
using namespace std;

struct Rational1
{
    Rational1(int n = 0, int d = 1): num(n), den(d)
    {
        cout << __func__ << "(" << num << "/" << den << ")" << endl;
    }

    int num;
    int den;
};

struct Rational2
{
    explicit Rational2(int n = 2, int d = 1): num(n), den(d)
    {
        cout << __func__ << "(" << num << "/" << den <<")" << endl;
    }

    int num;
    int den;
};

void Display1(Rational1 ra)
{
    cout << "Numerator: " << ra.num << " Denominatro" << ra.den << endl;
}

void Display2(Rational2 ra)
{
    
}

