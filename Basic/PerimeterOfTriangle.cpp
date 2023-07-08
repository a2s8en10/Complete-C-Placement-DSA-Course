#include <iostream>
using namespace std; 
int main(){
	
	float a,b,c, Perimeter = 0;
	
	cout << "Enter The Hight =";
	cin>>a;
	
	cout << "Enter The Base =";
	cin>>b;
	
	cout << "Enter The Side =";
	cin>>c;
	
	Perimeter = a+b+c;
	
	cout << "Perimeter Of Triangle ="<< Perimeter;
	return 0;
}
