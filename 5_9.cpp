#include <memory>
#include <iostream>
using namespace std;

void check(weak_ptr<int>& wp)
{
    shared_ptr<int> sp = wp.lock();
    if (sp != nullptr)
    {
        cout << "still" << *sp << endl;
    }
    else
    {
        cout << "pointer is invalid" << endl;
    }
}

int main()
{
    shared_ptr<int> sp1(new int(22));
    shared_ptr<int> sp2 = sp1;
    weak_ptr<int> wp = sp1;
    cout << *sp1 << endl;
    cout << *sp2 << endl;
    check(wp);

    sp1.reset();
    cout << *sp2 << endl;
    check(wp);

    sp2.reset();
    check(wp);
}
