#include <iostream>
using namespace std;

void standC()
{
    cout << "Standard Clib: " << __STDC_HOSTED__ << endl;
    cout << "Standard C: " << __STDC__ << endl;
    //cout << "C Standard version: " << __STDC_VERSION__ << endl;
    cout << "ISO/IEC " << __STDC_ISO_10646__ << endl;
}

const char* hello() { return __func__; }
const char* world() { return __func__; }

int main()
{
    cout << hello() << ",   " << world() << endl;
    return 0;
}