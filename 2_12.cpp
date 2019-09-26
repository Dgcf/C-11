#include <iostream>
using namespace std;

void Throw() { throw 1;}
void NoBlockThrow() { Throw(); }
void BlockThrow() noexcept { Throw(); }

int main()
{
    try
    {
        Throw();
    }
    catch(...)
    {
        std::cerr << "Found throw" <<  '\n';
    }

    try
    {
        NoBlockThrow();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Throw is No Blocked" << e.what() << '\n';
    }
    
    try
    {
        BlockThrow();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Found throw 1" << e.what() << '\n';
    }
    
}
