// program name: 06_sphere_volume
// program idea obtained from: it's a common idea
/* program description:
            It accepts a sphere's radius then calculates its volume and area*/

#include <iostream>
#include <cmath>

using std::endl;

//Another I/O Library to display (³) 
#include <fcntl.h>
using std::wcout;
using std::wcin;
#define _O_WTEXT       0x10000


int main(){
    _setmode(_fileno(stdout), _O_WTEXT);//An OS-specific calls to set up the console for Unicode

    float radius = 0 ;

    wcout << "This program calculates sphere's volume from a given radius :" << endl ;  // welcome message
    wcout << "Enter a sphere's radius: " ; 
	wcin >> radius ; 
	
    wcout << "Area = (4/3)*PI*" <<  radius << L"\x00B3 = "<< (4/3.0)*M_PI * pow(radius, 3)<< endl ; //L"\x00B3" to display (³)

  return 0 ;
}