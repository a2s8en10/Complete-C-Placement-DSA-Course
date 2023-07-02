#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number :";  
	cin >> n;
	
	int i = 1;
	while(i<=n)
	
	{
		int j = 1;
		while(j<=n)
		
		{	
		
		// i or j ko isliye ek sath liya hai
		// kuyki row or colomn ek sth incriment ho rahe hai 
		
			char ch = 'A'+ i + j - 2 ;
			cout << ch << " ";
			j = j + 1;
			
		} 
		
		cout << endl;
		i = i + 1;
	}
}
