#include<iostream>

using namespace std;

int calculator(int Num1, char sign, int Num2){
	int result = 0 ;
	if (sign == '+'){
		result = Num1 + Num2;
	}
	else if (sign == '-'){
		result = Num1 - Num2;
	}
	else if (sign == '*'){
		result = Num1 * Num2;
	}
	else if (sign == '/'){
		if(Num2 == 0){
			cout<<"Error: Division by zero is not allowed."<<endl;
		}
		else{
			result = Num1 / Num2;
		}
	}
	else{
		cout<<"Error: Invalid operator."<<endl;
	}
	cout<<"Result: ";
	return result;
}

int main(){
	int Number1, Number2; char operation;
	cout<<"Enter the Expression (operand1 operator operand2): ";
	cin>>Number1;
	cin>>operation;
	cin>>Number2;
	cout<<calculator(Number1,operation, Number2);
	
	return 0;
}
