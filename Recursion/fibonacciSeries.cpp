#include <iostream>
using namespace std;

int fibonacciSeries(int position){
		
		if (position ==1 )
			return 0;
		else if( position == 2)
			return 1;
		else
			return fibonacciSeries(position - 1) + fibonacciSeries(position - 2);

}

int main(){
	int numberOfElements;
	
	cout<<"Type the position of element that you want see\n";
	cin>>numberOfElements;
	
	cout<<fibonacciSeries(numberOfElements);
	
}
