#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	
	int row = 1 ;//  i is doneted by ROW
	while(row <= n)
	{
		int col = 1; // j is doneted by COLOUM 
		while(col <= row)
		{	
			int value;
			cout << " * ";
			col = col + 1;
		}
		cout << endl;
		row = row + 2;
	}
}
