#include<iostream>
using namespace std;
int main(){
	
	int n,i,k;
	
	cout << "How many find digit: ";
	cin >> k;
	
	int h = 0;
	
	for(i=0; i<k; i++)
	{
		cout <<"Enter the any number_"<<k<<"_Times: ";
		cin >> n;
		
		if(n>h)
			{
				h = n;
			}
	}
		cout << "Largest number = " << h;
}
