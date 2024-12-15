#include<iostream>

using namespace std;

bool isEven(int Number){
	if(Number % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int Num;
	cout<<"Enter a Number: ";
	cin>>Num;
	if (isEven(Num) == true){
		cout<<Num<<" is even.";
	}
	else if (isEven(Num) == false){
		cout<<Num<<" is odd.";
	}
	
	return 0;
}
