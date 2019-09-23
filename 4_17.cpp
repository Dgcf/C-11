#include <typeinfo>
#include <iostream>
using namespace std;

const int ic = 0;
volatile int iv = 0;
struct S
{
    int i;
};
const S a = { 0 };
volatile S b;
volatile S* p = &b;

int main()
{
    cout << is_const<decltype(ic)>::value << endl;
    cout << is_volatile<decltype(iv)>::value << endl;
    cout << is_const<decltype(a)>::value << endl;
    cout << is_volatile<decltype(b)>::value << endl;
    cout << is_const<decltype(a.i)>::value << endl;
    cout << is_volatile<decltype(p->i)>::value << endl;
}