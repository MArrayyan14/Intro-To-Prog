#include<iostream>

using namespace std;

double celsiusToFahrenheit(double Celsius){
	double Fahrenheit = ((Celsius*9)/5)+32;	
	cout<<"Temperature in Fahrenheit: ";
	return Fahrenheit;
}

int main(){
	double Temp;
	cout<<"Enter a temperature in Celsius: ";
	cin>>Temp;
	cout<<celsiusToFahrenheit(Temp);
	
	return 0;
}
