#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	 int x;
	 float y;
	cin>>x; //withdraw amount
	cin>>y; //initial amount
	
	
	
	
	if (x%5==0 && x + 0.50 <=y){
	
	    
	    cout<<fixed<<setprecision(2)<<y - x-0.50;;
	}
	else {
	    cout<<fixed<<setprecision(2)<<y;
	}
	
	    
	
	return 0;
}