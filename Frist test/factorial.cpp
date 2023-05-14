#include <iostream>
using namespace std;
int main(){

	double n;
	
	cout << "Enter the number :";
	cin >> n;
	
	int i = 1;
	
	int sum = 1;
	
		while(i<=n)
		{
	   	sum = sum * i; 
	   	
		cout << sum << endl ;
		
		i = i + 1;
		}
	
	return 0;
	
}
