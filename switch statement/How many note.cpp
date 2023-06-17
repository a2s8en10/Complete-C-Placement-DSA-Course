#include <iostream>
using namespace std ;
int main ()
{
	int n, sum;
	
	cout << "Enter the number: ";
	cin >> n;
	switch (n)
	{
		case 100 : 
			
			while (n<=100){
				sum=n/100;
				cout << sum ;
				n=n+1;				
			}
			break;
			
		case 50 : 
			
			while (sum<=50){
				sum=sum/50;
				cout << sum;
				sum=sum+1;
			}
			break;
		
		case 20 :
			
			while (sum<=20){
				sum=sum/20;
				cout << sum;
				sum=sum+1;
			}
			break;
		
		case 1 : 
		
			while (sum<=1){
				sum=sum/1;
				cout << sum;
				sum=sum+1;
			}
			break;
			
	}
	
}
