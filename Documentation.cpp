
//************************************
// Program Name:  Documentation.cpp
// Author:  Pam Smith
// This program prints a message entered by the user!.
//************************************
#include <iostream>
#include <string>
using namespace std;

// Prototypes
void output(string);

int main ()
{

  string message;
  
  cout << "Please enter the message you would like to print " << endl;
  getline(cin, message);
  
  output(message);
  return 0;
}
// Function outputs (cout) message contained in parameter
// Precondition:  parameter contains a string
// Postcondition: contents of string variable output to console
void output (string myMsg) 
{
	cout << "The message is: " << myMsg << endl;
	
	return;
}
