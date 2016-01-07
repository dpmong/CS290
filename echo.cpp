//This program will ask for a user to input an integer.
//It will then repeat that integer back to the display
//
#include <iostream>

using namespace std;

int main()
{
	//This statement sets the integer variable
	int user_input;

	//Request for integer
	cout << "Please input an integer" << endl;

	//User input of integer
	cin >> user_input;

	//Output of user defined integer
	cout << "You selected " << user_input << endl;

	return 0;
}

