#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout <<"Enter the number: ";
	cin >>n;
	
	int i = 1;
	int sum = 0;
	
	for (i=1; i<=n; i++)
	
		sum = sum + i ;
		cout << "The sum of series = " << sum;	
}
