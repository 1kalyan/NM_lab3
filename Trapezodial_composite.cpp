#include <iostream>
#include <cmath>
using namespace std;

double trap_Composite(double x) {
    return sin(1 / exp(x));
}

int main() {
    int n;
    cout << "Enter the number of equal intervals: \n";
    cin >> n;
    double fx[n + 1], I, h, x[n + 1];
    
    cout << "Enter the range for integration (start, end): \n";
    cin >> x[0] >> x[n];
    
    h = (x[n] - x[0]) / n;
    double sum = 0.0; 

    for (int i = 1; i < n; i++) {
        x[i] = x[i-1] + h;
        fx[i] = trap_Composite(x[i]);
        sum += 2 * fx[i];
    }

    fx[0] = trap_Composite(x[0]);
    fx[n] = trap_Composite(x[n]);

    sum += fx[0] + fx[n];

    I = h * sum / 2; 

    cout << "Result of integration: " << I << endl;
    return 0;
}
