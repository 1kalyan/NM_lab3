#include<iostream>
#include<cmath>
using namespace std;

double f(double x,double y){
	return ((x*x*x)+(y*y*y));
}

int main(){
	double a,b,c,d,I,x,y;
	cout<<"Enter a : ";
	cin>>a;
	cout<<endl<<"Enter b : ";
	cin>>b;
	cout<<endl<<"Enter c : ";
	cin>>c;
	cout<<endl<<"Enter d : ";
	cin>>d;
	x=(b-a)/2;
	y=(d-c)/2;
	I=(x*y*(f(a,c)+f(a,d)+f(b,c)+f(b,d)));
	cout<<endl<<"The required answer is : "<<I;	
	return 0;	
}