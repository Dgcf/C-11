/********************************************************
 * 用户自定义字面量
 * ******************************************************/

#include <iostream>
using namespace std;

typedef unsigned char uint8;

struct RGBA
{
    uint8 r;
    uint8 g;
    uint8 b;
    uint8 a;

    RGBA(uint8 R, uint8 G, uint8 B, uint8 A=0):
        r(R), g(G), b(B), a(A)
        { }
};

RGBA operator "" _C(const char* col, size_t n)
{
    const char* p = col;
    const char* end = col + n;
    const char* r, *g, *b, *a;
    r=g=b=a=nullptr;

    for (; p < end; ++p)
    {
        if (*p == 'r')
        {
            r = p;
        }
        else if (*p == 'g')
        {
            g = p;
        }
        else if(*p == 'b')
        {
            b = p;
        }
        else if (*p == 'a')
        {
            a = p;
        }
    }
    
}


