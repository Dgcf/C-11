/**********************************
 * 就地初始化和列表初始化
 * ********************************/

#include <iostream>
using namespace std;

struct Mem
{
    Mem() {cout << "Mem default, num: " << num << endl; }
    Mem(int i): num(i) { cout << "Mem, num: " << num << endl; }

    int num = 2;
};

class Group
{
private:
    char val{'g'};
    Mem a;
    Mem b{19};
public:
    Group() { cout << "Group default. val: " << val << endl; }
    Group(int i): val('G'), a(i)
    {
        cout << "Group.val: " << val << endl;
    }
    void NumOfA() { cout << "number of A: " << a.num << endl; }
    void NumOfB() { cout << "number of B: " << b.num << endl; }
    
};

int main()
{
    Mem member;
    Group group;

    group.NumOfA();
    group.NumOfB();
    Group group2(7);
    group2.NumOfB();
    group2.NumOfB();

}

