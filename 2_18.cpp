#include <iostream>
using namespace std;

struct People
{
    public:
        int hand;
        static People* all;
};

struct Object
{
    virtual void func() = 0;
};

struct Base: public Object
{
    void func() final
    {
        cout << "Base::func" << endl;
    }

    virtual void func1() final
    {
        cout << "good" << endl;
    }
};

struct Derived: public Base
{
    void func()
    {
        cout << "Derived::Base" << endl;
    }

    void func1()
    {

    }
};

int main()
{
    People p;
    cout << sizeof(p.hand) << endl;
    cout << sizeof(People::all) << endl;
    cout << sizeof(People::hand) << endl;

    return 0;
}
