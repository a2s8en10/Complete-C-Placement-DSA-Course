#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	
	int i = 1 ;//  i is doneted by ROW
	while(i<=n)
	{
		int j = 1; // j is doneted by COLOUM 
		while(j<=i)
		{	
			int value;
			cout << " * ";
			j = j + 1;
		}
		cout << endl;
		i = i + 2;
	}
}
