#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number : ";
	cin >> n;
	int i;
	
	for (i=0; i<=n; i+=2)
	{
		cout << i << " ";
		
		if (i&1)
		{
			continue;
		}
			i++;
		
	}
}
