#include <iostream>
using namespace std;
int main()
{
    int x=5, y, z=4;
    int *xptr, *yptr, *zptr;
    xptr = &x;
    yptr = &y;
    zptr = &z;
    y = *xptr;
    cout << "\nx = " << x << " &x = " << &x;
    cout << " xptr = " << xptr << " *xptr = " << *xptr;
    cout << "\ny = " << y << " &y = " << &y ;
    cout << " yptr = " << yptr << " *yptr = " << *yptr;
    cout << "\nz = " << z << " &z = " << &z ;
    cout << " zptr = " << zptr << " *zptr = " << *zptr;
    x = 2*(z+5);
    y = 2*(*zptr+5);
    cout << "\nx = " << x << " y = " << y << " z = " << z << endl;
    return(0);
}
