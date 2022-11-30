// program name: 02_area_of_a_triangle
// program idea obtained from: https://edabit.com/
/* program description:
            It accepts triangle's (base and height) then calculates its (area)
                    (i.e. base * height / 2) */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	float base = 0 , height = 0 ;
	
    cout << "This program calculates are of a triangle:" << endl ;  // welcome message
	
    cout << "Enter  Base: " ; 
	cin >> base ; 
    cout << "Enter  Height: " ; 
    cin >> height ; 

	cout << "Area: (" << base << " x " << height << ") / 2  = " << base * height / 2 << endl ; 

  return 0 ;
}