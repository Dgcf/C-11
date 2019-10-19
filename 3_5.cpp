/*************************************************
 * 测试派生类的继承
 * ***********************************************/

struct A
{
    A(int i){}
    A(double d, int i) {}
    A(float f, int i, const char* c) {}
};

struct B: A
{
    using A::A;
    int d{0};
};

class Info1
{
public:
    Info1():  type(1), name('a') { InitRest(); }
    Info1(int i): type(i), name('a') { InitRest(); }
    Info1(char e): type(1), name(e) { InitRest(); }

private:
    void InitRest() { }
    int type;
    char name;
};

class Info2
{
public:
    Info2() { InitRest(); }
    Info2(int i): Info2() { type = i; }

private:
    void InitRest() { }
    int type { 1 };
    char name { 'a' }
};

int main()
{
    B b(356);
}
