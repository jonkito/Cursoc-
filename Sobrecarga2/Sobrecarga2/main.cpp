#include <iostream>
#include <cmath>

using namespace std;
double area(double);
double area(double, double);

int main()
{
    int lado;
    cout << "Introduce el radio o lado: ";
    cin >> lado;
    cout << "El area del circulo de radio " << lado << " es " << area(lado) << endl;
    cout << "El area del cuadrado de lado " << lado << " es " << area(lado, lado) << endl;
    return 0;
}


double area(double a) {
    return M_PI * (a *a);
}

double area(double a, double b) {
    return a*b;
}
