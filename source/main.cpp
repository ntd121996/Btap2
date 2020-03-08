#include "phanso.h"





int main( int argc, char* argv[])
{
    FRACTION a, b, c;
    a.Input();
    b.Input();
    //////////////////
    cout << "Cong = ";
    c = a;
    c.Add(b);
    c.Output();
    //////////////////
    cout << "Tru = ";
    c = a;
    c.Subtract(b);
    c.Output();
    //////////////////
    cout << "Nhan = ";
    c = a;
    c.Multipy(b);
    c.Output();
    //////////////////
    cout << "chia = ";
    c = a;
    c.Divine(b);
    c.Output();

    return 0;
}