#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char linea[255];

    for(int i = 0; i < argc; i++)
    {

        cout << "Argumento (" << i << "): " << argv[i] << endl;

    }
    return 0;
}
