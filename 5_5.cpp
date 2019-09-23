#include <iostream>
using namespace std;

enum class Type { General, Light, Medium, Heavy };
enum class Category { General = 1, Pistol, MachineGun, Cannon};

int main()
{
    Type t = Type::Light;
    t = General;
}
