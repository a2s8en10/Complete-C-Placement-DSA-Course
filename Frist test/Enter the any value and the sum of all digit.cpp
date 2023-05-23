#include <iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout << "Enter the any number: ";
	cin >> n;
	
	int sum = 0;
	
	while(n!=0){
		//ex:- n=236 
		// step 1. i=6 & n=23
		// step 2. i=3 & n=2
		// step 3. i=2 & n=0
		// step 4. sum = sum + i
		// step 5. sum = 11 ans.
		
		i=n%10;
		n=n/10;
		sum = sum+i;
	}
	cout <<"Sum of all digit = "<< sum;
	
	
	
	
	
	
	
	
	
}
