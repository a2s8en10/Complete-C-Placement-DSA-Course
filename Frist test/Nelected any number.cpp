#include <iostream>
using namespace std;
int main()
{
	int n,p;
	
	cout << "Enter the number :";
	cin >> n;
	
	cout << "Enter the nelected number :";
	cin >> p ;
	int i = 1;
	
	while(i<=n)
	{
		
		if(i==p)
		{
			i = i + 1;
			continue;
		}
		else{	
			cout << " " << i ;
			i = i + 1;
			}
		
	}
	
	
	
	
}
