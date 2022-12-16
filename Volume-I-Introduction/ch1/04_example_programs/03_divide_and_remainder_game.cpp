// program name: 03_divide_and_remainder_game
// program idea obtained from: (Beginning C++ Through Game Programming) Book 
/* program description:
            It accepts number of apples then distributes them equivalently 
                among group of friends and tell user he remainder!
                    (i.e. n_apples / n_friends , n_apples % n_friends) */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int n_apples = 0 , n_friends = 0 ;
	
    cout << "This program distributes apples among firends:" << endl ;  // welcome message
	
    cout << "Enter Number of apples: " ; 
    cin >> n_apples ; 
    cout << "Enter Number of frieds: " ; 
    cin >> n_friends ; 

    cout << "Every friend's share: " << n_apples / n_friends << endl ; 
    cout << "Apples left: " << n_apples % n_friends << endl ; 

  return 0 ;
}
