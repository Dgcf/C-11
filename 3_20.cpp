#include <iostream>
using namespace std;

struct Copyable
{
    Copyable() { cout << "Copyable" << endl; }
    Copyable(const Copyable& o)
    {
        cout << "Copyable(const Copyable& o)" << endl;
    }
    // Copyable(Copyable&&)
    // {
    //     cout << "RValue" << endl;
    // }
};

Copyable ReturnRvalue() 
{
    return Copyable();
}

void AcceptVal(Copyable ) {}

void AcceptRef(const Copyable& ) {}

void AcceptRvalueRef(Copyable &&s) 
{
    Copyable news = std::move(s);
}

int main()
{
    cout << "pass by value: " << endl;
    AcceptVal(ReturnRvalue());
    cout << "pass by reference: " << endl;
    AcceptRef(ReturnRvalue());
    cout << "pass by Rvalue reference" << endl;
    AcceptRvalueRef(ReturnRvalue());

    return 0;
}
