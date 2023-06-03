#include<iostream>
using namespace std;
int main()
{
	int n,i;
	
	cout << "Enter the number: ";
	cin >> n ;
	
//	cout << "How many times of shift: ";
//	cin >> i ;
	
//	LEFT SHIFT (<<)	
	
	cout << "Left shift" << endl ;
	cout << "1 shift = " << (n<<1) << endl ;
	cout << "2 shift = " << (n<<2) << endl ;	
	cout << "3 shift = " << (n<<3) << endl ;	
	
//	RIGHT SHIFT (>>)

	cout << "Rigth shift" << endl ;
	
	cout << "1 shift = " << (n>>1) << endl ;
	cout << "2 shift = " << (n>>2) << endl ;	
	cout << "3 shift = " << (n>>3) << endl ;	

}
