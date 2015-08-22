#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	string input = "";

	int fahrenheit = 0;

	while(true) {

		cout << "Please type a value in fahrenheit: ";
		getline( cin, input );

		stringstream myStream(input);

		if ( myStream >> fahrenheit )
			break;

		cout << "Invalid value, please try again" << endl;

	}

	float celsius = 0.0f;

	celsius = ( fahrenheit - 32 ) * 5 / 9;

	cout << "Converting to Celsius: " << celsius << endl << endl;

	return 0;

}
