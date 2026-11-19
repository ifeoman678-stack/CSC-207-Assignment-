#include <iostream>
using namespace std;
int main(){
	int number;
	int integer ;
	while (true)
	{
	cout  << "Enter a number(0 to stop):";
	cin>>number;
	if(number==0) {
		cout<< "Stop"<< endl;
	break;
	}
	if(number %2 ==0)
	{
		cout << number<< " is an even number" <<endl;
	}
	else
	cout << number <<  " is an odd number"<<endl;
	}
	return 0;
}