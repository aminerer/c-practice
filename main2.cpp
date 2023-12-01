#include <iostream>

using namespace std ;

main() {
	int x,y,z,variable1, variable2 ;
	float result;
	cin >> x>> y>> z;
	variable1 = x-y;
	variable2 = x+z;
	variable1 = variable1 * variable2;
	variable2 = (x+y+z) * (x+y+z) + 1;
	result = variable1 / variable2;
	cout<<result;
	
	
}