#include <iostream>

using namespace std; 
int main(){
	
	float l,w, perimeter = 0;
	
	cout << "Enter The Length =";
	cin>>l;
	
	cout << "Enter The Width =";
	cin>>w;
	
	perimeter = 2*(w+l);
	
	cout << "Perimeter Of Rectangle ="<<perimeter;
	
	return 0;


}
