#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	
	int i = 2 ;//row
	while(i<=n)
	
	{
		int j = 1; // col
		while(j<=i)
		
		{	
			int value;
			cout << "*";
			j = j + 1;
		}
		
		cout << endl;
		i = i + 2;
	}
}
