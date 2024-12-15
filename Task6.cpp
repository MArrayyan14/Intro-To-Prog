#include<iostream>

using namespace std;

int maxOfThree(int N1,int N2,int N3){
	int largest = -999999999;
	if(N1> largest){
		largest = N1;
	}
	if(N2> largest){
	largest = N2;
	}
	if(N3> largest){
	largest = N3;
	}
	return largest;
}

int main(){
	int N1,N2,N3;
	cout<<"Enter three numbers: ";
	cin >>N1>>N2>>N3;
	
	cout<<"Maximum of the three numbers is: "<<maxOfThree(N1,N2,N3);
	return 0;
}
