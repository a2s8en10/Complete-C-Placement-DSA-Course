#include <iostream>
using namespace std;
int main(){

	int n;
	
	cout << "Enter the number :";
	cin >> n;
	
	int i = 1;
	
	int sum = 0;
	
		while(i<=n)
		{
	   	sum = sum + i; 
	   	
		cout << i << "+" ;
		
		i = i + 1;
		}
		cout <<"="<< sum;
	
	return 0;
	
}
