/*******************************************
 * 模板函数的默认模板参数
 * *****************************************/

#include <iostream>
using namespace std;

template<typename T=int> void TempFun(T a)
{
    cout << a << endl;
}

int main()
{
    TempFun(1);
    TempFun("hello");
}
