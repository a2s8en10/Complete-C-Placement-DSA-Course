#include<iostream>
using namespace std;
int main()
{
	int x,y;
	
	cout << "Enter the base number: ";
	cin >> x;
	
	cout << "Enter the power number: ";
	cin >> y;
	
	int i = 1;
	int p = 1;
	
	for(i=1; i<=y; i++)
		
		p = p*x;
		
		cout << "Power solution = " << p;
}
