#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char stringOne[1000] = "";
	char stringTwo[1000] = "";
	char stringThree[1000] = "";

	cout << "Enter first string: ";
	cin >> stringOne;
	cout << "Enter second string: ";
	cin >> stringTwo;
	cout << "Enter third string: ";
	cin >> stringThree;

	int len1 = strlen(stringOne);
	int len2 = strlen(stringTwo);
	int len3 = strlen(stringThree);

	if (len1 == len2 && len2 == len3) {
		cout << "THEY ARE EQUAL IN LENGTH";
	}
	else {
		cout << "THEY ARE NOT EQUAL IN LENGTH";
	}

	cout << endl;
	return 0;
}
