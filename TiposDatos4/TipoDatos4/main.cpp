#include <iostream>

using namespace std;
#include <iostream>

union { //autocasting
    char y;
    int x;
} foo;

int main()
{
    foo.x = 126;
    cout << "as int: " << (int)foo.x << endl;
    cout << "as char: " << foo.y << endl;
    return 0;
}
