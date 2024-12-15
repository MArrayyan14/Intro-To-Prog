#include<iostream>

using namespace std;

int factorial(int Number){
	int fact = 1;
	if(Number ==0){
		fact = 1;	
	}
	else{
		for(int i = 1; i<=Number;i++){
			fact = fact * i;
		}
	}

	return fact;
}

int main(){
	int Number;
	cout<<"Enter a positive Integer: ";
	cin>>Number;
	
	if (Number <0){
		cout<<"Error: Please enter a positive integer.";
	}
	else{
		cout<<"Factorial of "<<Number<<" is: "<<factorial(Number);
	}
	
	return 0;
}
