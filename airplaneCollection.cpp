#include <vector>
#include <string>
#include <iostream>
#include "airplaneCollection.h"

using namespace std;

AirplaneCollection::AirplaneCollection() {

}

void AirplaneCollection::addAirplane(Airplane airplane) {
	airplanes.push_back(airplane);
}

void AirplaneCollection::removeAirplane(string tailNumber) {
	for (int i = 0; i < airplanes.size(); i++) {
		if (airplanes.at(i).getTailNumber().compare(tailNumber) == 0) {
			airplanes.erase(airplanes.begin() + i);
		}
	}
}

void AirplaneCollection::editAirplane(string tailNumber, string make, string model, int numSeats, int range, string status) {
	for (int i = 0; i < airplanes.size(); i++) {
		if (airplanes.at(i).getTailNumber().compare(tailNumber) == 0) {
			airplanes.at(i).setStatus(status);
			airplanes.at(i).setMake(make);
			airplanes.at(i).setModel(model);
			airplanes.at(i).setNumSeats(numSeats);
			airplanes.at(i).setRange(range);
		}
	}
}

Airplane AirplaneCollection::findAirplane(string tailNumber) {
	for (int i = 0; i < airplanes.size(); i++) {
		if (airplanes.at(i).getTailNumber().compare(tailNumber) == 0) {
			return airplanes.at(i);
		}
	}
}

void AirplaneCollection::printAirplane(string tailNumber) {
	for (int i = 0; i < airplanes.size(); i++) {
		if (airplanes.at(i).getTailNumber().compare(tailNumber) == 0) {
			cout << "Airplane #" << i + 1 << ": " << endl;
			cout << "Make: " << airplanes.at(i).getMake() << endl;
			cout << "Model: " << airplanes.at(i).getModel() << endl;
			cout << "Tail number: " << airplanes.at(i).getTailNumber() << endl;
			cout << "Number of seats: " << airplanes.at(i).getNumSeats() << endl;
			cout << "Range: " << airplanes.at(i).getRange() << endl;
			cout << "Status: " << airplanes.at(i).getStatus() << endl;
		}
	}
}

void AirplaneCollection::printAirplanes() {
	for (int i = 0; i < airplanes.size(); i++) {
		printAirplane(airplanes.at(i).getTailNumber());
		cout << endl;
	}
}

