// program name: 00_return_next_number
// program idea obtained from: https://edabit.com/
/* program description: 
			it accepts a (number) from user then return this (number + 1) */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int number = 0 ;
	
    cout << "Enter a number: " ; 
    cin >> number ; 
    cout << "----------------------" << endl;
    cout << "You Entered: " << number << endl;
    cout << "Next Number is: " << number + 1 << endl ; 

  return 0 ;
}
