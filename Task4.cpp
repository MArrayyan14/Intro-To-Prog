#include<iostream>

using namespace std;
double power(int base,int exponent){
	double result = 1;
	if (exponent < 0){
		exponent = exponent * -1;
		for(int i=1; i<=exponent; i++ ){
			result = result*base;
		}
		result = 1/result; 
	}
	else{
		for(int i=1; i<=exponent; i++ ){
			result = result*base;
		}
	}
	return result;
}

int main(){
	double base,exponent;
	cout<<"Enter the base: ";
	cin>>base;
	cout<<"Enter the exponent: ";	
	cin>>exponent;
	if(exponent == 0 && base == 0){
		cout<<"Undefined";
	}
	else{
		cout<<base<<" raised to the power of "<<exponent<<" is: "<<power(base,exponent);
	}
	return 0;
}
