#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter the two number: ";
	cin >> a >> b ;
	
	cout << "a&b= " << (a&b)<< endl;  //(AND OPERATOR USE &)
	cout << "a|b= " << (a|b)<< endl;  //(OR  OPERATOR USE |)
	cout << "a~b= " << ~a   << endl;  //(NOT OPERATOR USE ~)
	cout << "a^b= " << (a^b)<< endl;  //(NOR OPERATOR USE ^)	
	
}
