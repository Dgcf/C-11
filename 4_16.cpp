#include <iostream>
#include <typeinfo>
using namespace std;

class White {};
class Black {};

int main()
{
    White a;
    Black b;

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;

    White c;
    bool a_b_sametype = (typeid(a).hash_code() == typeid(b).hash_code());
    bool a_c_sametype = (typeid(a).hash_code() == typeid(c).hash_code());
    cout << (int)a_b_sametype << "\n" << (int)a_c_sametype << endl;
}
