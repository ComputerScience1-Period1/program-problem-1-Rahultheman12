/*
Rahul Singh- 9/22/17 1st
Assignment Name: Display Text
This displays my full period name, the date, and my class period
*/
// Libraries 
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and getch() for pause()
// Namespaces 
using namespace std; //*
					 // Functions()
void pause() {
	cout << "Rahul Singh 1st period Hello World!";
		while (!_kbhit());
	_getch();
	cout << '/n';

}
// MAIN
void main() {
	// Define and Assign your variable(s)

	// Display Text
	pause(); // pauses to see displayed text 
}
