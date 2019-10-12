#include "cabin.h"
#include <iostream>
#include <string>

using namespace std;

string Cabin::getPosition() {
	return position;
}

void Cabin::setPosition(string position1) {
	position = position1;
}

void Cabin::printInfo() {
	CrewMember.printInfo();
	cout << "Position: " << position << endl;
}
