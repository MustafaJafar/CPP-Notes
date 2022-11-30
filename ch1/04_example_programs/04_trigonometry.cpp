// program name: 04_trigonometry
// program idea obtained from: myself
/* program description:
            It accepts an angle then calculates its sin , cos , tan 
            This program demonstrates using another built in library*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    const float PI = 3.14 ; 

    float angle = 0 , angle_in_radians = 0 ;

    cout << "This program calculates (sin , cos , tan) of an angle:" << endl ;  // welcome message
	
    cout << "Enter an Angle in degrees: " ; 
    cin >> angle ; 
    
    angle_in_radians = angle * PI / 180 ; //convert degrees to radians 

    cout << "sin(" <<  angle << ") = "<< sin(angle_in_radians) << endl ; 
    cout << "cos(" <<  angle << ") = "<< cos(angle_in_radians) << endl ; 
    cout << "tan(" <<  angle << ") = "<< tan(angle_in_radians) << endl ; 

  return 0 ;
}
