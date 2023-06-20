# include <iostream>
using namespace std;
int main()
{
	int a,b;
	
	cout << "Enter the number of a : " ;
	cin >> a;
	
	cout << "Enter the numbere of b : " ;
	cin >> b;
	
	char op;	// op = opretion I means +, -, %, *, \, etc. 
	
	cout << "Enter the nunmber opretion are perform :" ;
	cin >> op;
	
	switch(op)
	{
		case '+':	cout << "The sum of = " << (a+b) << endl ;
				  	break;
				  
		case '-':	cout << "The subtract is = " << (a-b) << endl ;
					break;
		
		case '*':	cout << "The multi is = " << (a*b) << endl ;
					break;
		
		case '%':	cout << "The modulos is = " << (a%b) << endl ;
					break;

		case '/':	cout << "The divide is = "	<<(a/b) << endl ;
					break;			
		
		default :	cout << "Enter the valid opretion." << endl ; 						
					 		  
	}
	return 0;
	
	
}
