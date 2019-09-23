#include <thread>
#include <atomic>
#include <iostream>
using namespace std;

atomic<int> a {0};
atomic<int> b {0};

int ValueSet(int)
{
    int t = 1;
    a = t;
    b = 2;
}

int Observer(int)
{
    cout << "(" << a << ", " << b << ") " << endl;
}

int main()
{
    thread t1(ValueSet, 0);
    thread t2(Observer, 0);

    t1.join();
    t2.join();
    cout << "Got (" << a << ", " << b << ") " << endl;
}
