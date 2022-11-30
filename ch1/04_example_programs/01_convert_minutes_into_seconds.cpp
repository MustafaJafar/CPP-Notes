// program name: 01_convert_minutes_into_seconds
// program idea obtained from: https://edabit.com/
/* program description:
            It accepts (Minutes count) then convert it into (Seconds)
                    (i.e. multiply by 60) */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int minutes = 0 ;
	
	cout << "Enter Minutes Count: " ; 
	cin >> minutes ; 
    cout << "----------------------" << endl;
	cout << "Minutes Entered: " << minutes << endl;
	cout << "Equivalent Seconds: " << minutes * 60 << endl ; 

  return 0 ;
}