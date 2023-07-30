#include <iostream>
#include <math.h>
using namespace std;

double fun(double x) {
    return sqrt(1 - x * x);
}

void sim_Comp(double a, double b, int k, double f[]) {
    double h = (b - a) / k;
    f[0] = fun(a);
    f[k - 1] = fun(b);
    for (int i = 1; i < k - 1; i++) {
        if (i % 2 == 0) {
            f[i] = 2 * fun(a + i * h); // Corrected the index calculation here
        } else {
            f[i] = 4 * fun(a + i * h); // Corrected the index calculation here
        }
    }
}

int main() {
    double a,b,k,I;
    const int max_k = 10;
    double f[max_k];
    cout<<"Enter the range: ";
    cin>>a>>b;
    cout<<"Enter the number of interval: ";
    cin>>k;
    if (k < 2 || k > max_k) {
        cout << "Error: The number of intervals (k) should be between 2 and " << max_k << ".\n";
        return 1;
    }

    sim_Comp(a, b, k, f);

    I = 0;
    for (int i = 0; i <k; i++) {
        I += f[i];
    }
    I = I * (b - a) / (3 * (k-1));

    cout << "The integrated value is: " << I;

    return 0;
}
