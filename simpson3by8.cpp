#include<iostream>
#include<math.h>
using namespace std;


double fun(double x){
    return  (x*x*x +1);
}

double simp(double a,double b,double f[]){
    double h  = (b-a)/3;
    f[0] = fun(a);
    f[3] = fun(b);
    double I =0;
    for(int i=1;i<=2;i++){
        f[i] = 3*fun(a+h);
        a = a+h;  
        I +=f[i];
    }
    I = ((3*h)* (I+ f[0]+f[3]))/8;
    
    return I;

}
int main(){
    double a,b,h,f[4],result;
    cout<<"Enter the range: ";
    cin>>a>>b;
    result=simp(a,b,f);
    cout<<"The integrated value is "<<result;

    return 0;
}