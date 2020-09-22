#include <iostream>
#include <BUCLES.HPP>

using namespace std;

int main()
{
    Bucles miBucles;
    Bucles miOtroBucle(17);
    miBucles.bucleWhile(4);
    miOtroBucle.bucleDoWhile(14);
    cout << "Hello world!" << endl;
    return 0;
}
