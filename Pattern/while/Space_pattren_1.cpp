#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	
	int i = 1 ;
	while(i<=n)
	{
		int space = n-i; // space  print karna hai 
		while(space)
		{
			cout << " ";
			space = space - 1;
 		}
		int j = 1; // coloumn row kw equal hi chahiye
		while(j<=i)
		{
			cout << "*";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;		
	}	
}