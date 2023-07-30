#include <iostream>
#include <math.h>
using namespace std;

double fun(double x) {
    return sqrt(1 - x * x);
}

double simpson(double a, double b, double f[]) {
    double h = (b - a) / 2;
    f[0] = fun(a);
    f[1] = fun(a + h);
    f[2] = fun(a + h + h);
    double I = (f[0] + 4 * f[1] + f[2]) * h / 3;
    return I;
}

int main() {
    double f[3], I, a, b; 

    cout << "Enter the range: ";
    cin >> a >> b;

    I = simpson(a, b, f);
    cout << "The integrated value is: " << I;

    return 0; 
}
