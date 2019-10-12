#include "pilot.h"
#include <iostream>
#include <string>

using namespace std;

string Pilot::getRating() {
	return rating;
}

int Pilot::getCumulativeHours() {
	return cumulativeHours;
}

void Pilot::setRating(string rating1) {
	rating = rating1;
}

void Pilot::setCumulativeHours(int cumulativeHours1) {
	cumulativeHours = cumulativeHours1;
}

void Pilot::printInfo() {
	CrewMember.printInfo();
	cout << "Rating: " << rating << endl;
	cout << "Cumulative hours: " << cumulativeHours << endl;
}
