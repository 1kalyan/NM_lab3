#include<iostream>
#include<math.h>
using namespace std;

double trap(int x){
    return (sin(1/exp(x)));
}


int main(){
    int x0,x1;
    double h,I,fx0,fx1;
    cout<<"Enter the value of x0 and x1 (range):\n";
    cin>>x0>>x1;
    h = (x1-x0)/2;
    fx0 = trap(x0);
    fx1 = trap(x1);

    I = h* (fx0+fx1);
    cout<<"By trapezodial rule the integral value of sin(e^-x) is "<<I;
    
    return 0;
}