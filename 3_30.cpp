#include <vector>
#include <iostream>
#include <initializer_list>
using namespace  std;

enum Gender {boy, girl};
class People
{
private:
    vector<pair<string, Gender>> data;
public:
    People(initializer_list<pair<string, Gender>> l)
    {
        auto i = l.begin();
        for ( ; i != l.end(); ++i) 
        {
            data.push_back(*i);
        }
    }
    
};

int main()
{
    People p {{"hello", boy}, {"world", girl}};
    
}
