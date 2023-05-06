#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	// i ko hum row or j ko coloumn mana hai
	int i = 1;
	while(i<=n)
	{
		int j = 1;
		while(j<=n)
		{	// A is a character data type 
			char ch = 'A'+ i - 1 ;
			cout << ch << " ";
			j = j + 1;
		} 
		//cout use in a new line
		cout << endl;
		i = i + 1;
	}
}
