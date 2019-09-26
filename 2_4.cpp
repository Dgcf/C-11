/********
 * 变长参数
 * *******/
#include <stdio.h>

#define LOG(...) { \
    fprintf(stderr, "%s: Line  %d: \t", __FILE__, __LINE__);    \
    fprintf(stderr, __VA_ARGS__);   \
    fprintf(stderr, "\n");      \
}

#define assert_static(e) \
    do  \
    {   \
        enum { assert_static_ = 1 / (e)};   \
    } while (0);

template<typename t, typename u> 
int bit_copy(t& a, u& b)
{
    static_assert(sizeof(b) == sizeof(a), "the parameter of bit_copy must have same width");
}
    
int main()
{
    int a = 10;
    double b = 3;
    bit_copy<int, int>(a, b);
}
