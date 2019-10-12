#include "coPilot.h"
#include <iostream>
#include <string>

using namespace std;

string CoPilot::getRating() {
	return rating;
}

int CoPilot::getCumulativeHours() {
	return cumulativeHours;
}

void CoPilot::setRating(string rating1) {
	rating = rating1;
}

void CoPilot::setCumulativeHours(int cumulativeHours1) {
	cumulativeHours = cumulativeHours1;
}

void CoPilot::printInfo() {
	CrewMember.printInfo();
	cout << "Rating: " << rating << endl;
	cout << "Cumulative hours: " << cumulativeHours << endl;
}
