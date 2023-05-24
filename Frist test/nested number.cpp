#include<iostream>
using namespace std;
int main(){
	
	int n,a,b;
	cout << "How many times to print: ";
	cin >> n;
	
	for(a=n; a>0; a--)
	{
		cout << " Times" << a  << endl;
		
		for(b=1; b<=n; b++)
		{
			cout << b << " " << endl;
		}
	}
}
