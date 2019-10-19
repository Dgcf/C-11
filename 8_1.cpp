#include <iostream>
using namespace std;

struct HowManyBytes
{
    char a;
    int b;
};

struct alignas(32) ColorVector
{
        double r;
        double g;
        double b;
        double a;
};


int main()
{
    // cout << sizeof(HowManyBytes) << endl;
    // cout << offsetof(HowManyBytes, a) << endl;
    // cout << offsetof(HowManyBytes, b) << endl;

    cout << alignof(HowManyBytes) << endl;
    cout << alignof(ColorVector) << endl;
    return 0;
}
