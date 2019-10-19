#include <iostream>
using namespace std;

class HasPtrMem
{
private:
    /* data */
public:
    int *d;
    static int n_cstr;
    static int n_dstr;
    static int n_cptr;
    static int n_mvtr;

    HasPtrMem(): d(new int(0)) 
    {
        cout << "Construct: " << ++n_cstr << endl;
     }

     HasPtrMem(const HasPtrMem& h): d(new int(*h.d))
     {
         cout << "Copy construct: " << ++n_cptr << endl;
     }

     HasPtrMem(HasPtrMem&& h): d(h.d)
     {
         h.d = nullptr;
         cout << "Move construct: " << ++n_mvtr << endl;
     }

    ~HasPtrMem()
    {
        cout << "Destruct: " << ++n_dstr << endl;
    }
};

int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_dstr = 0;
int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_mvtr = 0;

HasPtrMem GetTemp()
{
    HasPtrMem h;
    return h;
}

int main()
{
    HasPtrMem a = GetTemp();
    // const bool & judgement = true;
    // const int& i = 10;
    return 0;
}
