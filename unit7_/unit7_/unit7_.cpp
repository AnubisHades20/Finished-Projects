#include <iostream>
#include <string>

using namespace std;

int main() {
	string string1{ "This is a test by myself." };
	string string2{ "Another test BY me for my because why not." };
	string string3{ "By myself BY by by bY for myself." };
	size_t position;
	size_t position2;

	cout << "String before modification: String 1: " << string1 << "\n String 2: " << string2 << "\n String 3: " << string3 << endl;

	position = string1.find("by");
	position2 = string1.find("BY");

	while (position != string::npos) {
		string1.replace(position, 3, "");
		position = string1.find("by", position);
	}

	while (position2 != string::npos) {
		string1.replace(position2, 3, "");
		position2 = string1.find("BY", position2);
	}

	position = string2.find("by");
	position2 = string2.find("BY");

	while (position != string::npos) {
		string2.replace(position, 3, "");
		position = string2.find("by", position);
	}

	while (position2 != string::npos) {
		string2.replace(position2, 3, "");
		position2 = string2.find("BY", position2);
	}

	position = string3.find("by");
	position2 = string3.find("BY");

	while (position != string::npos) {
		string3.replace(position, 3, "");
		position = string3.find("by", position);
	}

	while (position2 != string::npos) {
		string3.replace(position2, 3, "");
		position2 = string3.find("BY", position2);
	}

	cout << "\nString after modification: String 1: " << string1 << "\n String 2: " << string2 << "\n String 3: " << string3 << endl;
}