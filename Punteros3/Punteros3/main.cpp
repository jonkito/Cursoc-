#include <iostream>

using namespace std;

int calculo(int, int);
int calculo(int num1 = 23, int num2 = 24);
int calculo(int, int, int);
double calculo(double, double, double);


int main()
{
    int n1;
    double n2;

    cout << calculo(4,5) << endl;
    cout << calculo() << endl;
    cout << calculo(2,3,5) << endl;
    cout << calculo(2.5,3.6,4.5) << endl;

    return 0;
}

int calculo(int a, int b) {
    return a*b;
}

int calculo(int a, int b, int c) {
    return a*b*c;
}
double calculo(double a, double b, double c) {
    return a*b*c;
}
