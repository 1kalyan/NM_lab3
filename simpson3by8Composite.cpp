#include<iostream>
#include<cmath>
using namespace std;

double fun(double x){
    return  (1/(1+x*x));
}

double CompSimpThirdByEight(double a,double b,int n,double f[]){
    double h = (b-a)/n;
    
    f[0] = fun(a);
    f[n-1] = fun(b);
    double I =0;
    I = f[0] + f[n-1];
    for (int i =1;i<n-1;i++){
        if(i%3==0){
            f[i] = 2 * fun(a+i*h);
            I += f[i];
        }
        else {
            f[i] = 3 * fun(a + i * h); 
            I += f[i];
        }
    }
    I = (3 * h * I) / 8;

return I;

}



int main(){
    double a,b,result;
    int n;
    cout<<"Enter the range: ";
    cin>>a>>b;
    cout<<"Enter the value of n: ";
    cin>>n;
    if (n % 3!= 0) {
        cout << "Error: n must be a multiple of 3 for Simpson's 3/8 rule." << endl;
        return 1;
    }

    double f[10];
    result = CompSimpThirdByEight(a,b,n,f);
    cout<<"The integrated value using 3/8 composite simposon is: "<<result;


    return 0;
}