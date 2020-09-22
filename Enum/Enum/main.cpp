#include <iostream>

using namespace std;


enum color {
    red,
    yellow,
    green = 20,
    blue
};

enum {d, e, f = e + 2};
int main()
{
    color col = red;

    cout << endl << "red = " << col << " blue = " << blue << endl << "d = " << d << endl << "e = " << e << endl << "f = " << f << endl;
    return 0;
}
