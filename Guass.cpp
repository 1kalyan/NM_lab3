#include <iostream>
#include <cmath>
using namespace std;

#define f(x) exp(x)

void twoPoint() {
    int n = 2, i;
    float a, b, w[2], z[2], x[2], Ig = 0.0;
    cout << "\nInput initial value of x:";
    cout << "\na=";
    cin >> a;
    cout << "\nInput final value of x:";
    cout << "\nb=";
    cin >> b;
    w[0] = 1.0;
    w[1] = 1.0;
    z[0] = -0.5773502;
    z[1] = 0.5773502;
    for (i = 0; i < n; i++)
        x[i] = ((b - a) / 2) * z[i] + ((b + a) / 2);
    for (i = 0; i < n; i++)
        Ig += ((b - a) / 2) * (w[i] * f(z[i]));
    cout << "\nIntegral from " << a << " to " << b << " is " << Ig << endl;
}

void threePoint() {
    int n = 3, i;
    float a, b, w[3], z[3], x[3], Ig = 0.0000;
    cout << "\nInput initial value of x:";
    cout << "\na=";
    cin >> a;
    cout << "\nInput final value of x:";
    cout << "\nb=";
    cin >> b;
    w[0] = 0.55556;
    w[1] = 0.88889;
    w[2] = 0.55556;
    z[0] = -0.77460;
    z[1] = 0.00;
    z[2] = 0.77460;
    for (i = 0; i < n; i++)
        x[i] = ((b - a) / 2) * z[i] + ((b + a) / 2);
    for (i = 0; i < n; i++)
        Ig += ((b - a) / 2) * (w[i] * f(z[i]));
    cout << "\nIntegral from " << a << " to " << b << " is " << Ig << endl;
}

int main() {
    int choice;
    cout << "enter 1 for two point OR 2 for three point :";
    cin >> choice;
    if (choice == 1) {
        twoPoint();
    } else {
        threePoint();
    }
    return 0;
}
