#include <iostream>
using namespace std;
int main(){

	int a,b,c;
	cout << "Enter the 1st number:";
	cin >> a;
	
	cout << "Enter the 2nd number:";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << " After swapping the 1st number is:" << a << endl;
	
	cout << " After swapping the 2nd number is:" << b << endl;
	
}
