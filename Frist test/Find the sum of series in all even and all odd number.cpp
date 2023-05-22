#include <iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout <<"Enter the number = ";
	cin >>n;
	
	int sum = 0;
	
	for (i=0; i<=n; i=i+2)
	
		sum = sum + i ;
		cout << "The sum of series even number = " << sum;	
		
	for(i=1; i<=n; i=i+2)
		sum = sum + i; 
		cout << "The sum of series odd number = " << sum;
		  
		cout << " ";
		

}
