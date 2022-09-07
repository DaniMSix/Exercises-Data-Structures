#include <iostream>
using namespace std;

int rest=0;

int calculateMcd(int divisor, int dividend){
	
	if (dividend == 0){
		return divisor;
	} else {
		calculateMcd(dividend, divisor % dividend);
	}
}

int main(){
	
	int divisor, dividend;
	cout<<"Type the divisor\n";
	cin>>divisor;
	
	cout<<"Type the dividend\n";
	cin>>dividend;
	
	if (dividend>divisor){
		cout<<calculateMcd(dividend, divisor);
	} else {
		cout<<"The dividend should that the divisor\n";
	}
	
}

