// program name: 05_circle_perimeter_area
// program idea obtained from: it's a common idea
/* program description:
            It accepts a circle's radius then calculates its perimeter and area
            This program demonstrates using built in cmath constant
            Also another built in library that supports printing special character like (²) */

#include <iostream>
#include <cmath>

using std::endl;

//Another I/O Library to display (²) , this solution was brought from : https://stackoverflow.com/questions/65810752/stdwcout-printing-unicode-characters-but-they-are-hidden
#include <fcntl.h>
using std::wcout;
using std::wcin;
#define _O_WTEXT       0x10000


int main(){
    _setmode(_fileno(stdout), _O_WTEXT);//An OS-specific calls to set up the console for Unicode

    float radius = 0 ;

    wcout << "This program calculates circle's perimeter and area from a given radius :" << endl ;  // welcome message
    wcout << "Enter a circle's radius: " ; 
	wcin >> radius ; 

	wcout << "Perimeter = 2*PI*" <<  radius << " = "<< 2 * M_PI * radius << endl ; 
    wcout << "Area = PI*" <<  radius << L"\x00B2 = "<< M_PI * radius * radius << endl ; //L"\x00B2" to display (²)

  return 0 ;
}