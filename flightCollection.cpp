#include "flightCollection.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

FlightCollection::FlightCollection() {

}

void FlightCollection::addFlight(Flight flight) {
	flights.push_back(flight);
}

void FlightCollection::removeFlight(string tailNumber, int pilotID) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getTailNumber().compare(tailNumber) == 0 && flights.at(i).getPilotID() == pilotID) {
			flights.erase(flights.begin() + i);
		}
	}
}

void FlightCollection::editFlight(string tailNumber, int pilotID, int copilotID, int firstCabinCrewID, int secondCabinCrewID, int thirdCabinCrewID, int startDate, int endDate, int startTime, int endTime, string startAirportCode, string endAirportCode, int numPassengers, string status) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getTailNumber().compare(tailNumber) == 0 && flights.at(i).getPilotID() == pilotID) {
			flights.at(i).setStatus(status);
			flights.at(i).setCopilotID(copilotID);
			flights.at(i).setFirstCabinCrewID(firstCabinCrewID);
			flights.at(i).setSecondCabinCrewID(secondCabinCrewID);
			flights.at(i).setThirdCabinCrewID(thirdCabinCrewID);
			flights.at(i).setStartDate(startDate);
			flights.at(i).setEndDate(endDate);
			flights.at(i).setStartTime(startTime);
			flights.at(i).setEndTime(endTime);
			flights.at(i).setStartAirportCode(startAirportCode);
			flights.at(i).setEndAirportCode(endAirportCode);
			flights.at(i).setNumPassengers(numPassengers);
		}
	}
}

Flight FlightCollection::findFlight(string tailNumber, int pilotID) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getTailNumber().compare(tailNumber) == 0 && flights.at(i).getPilotID() == pilotID) {
			return flights.at(i);
		}
	}
	Flight dummy("", 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, "");
	return dummy;
}

void FlightCollection::printFlight(string tailNumber, int pilotID) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getTailNumber().compare(tailNumber) == 0 && flights.at(i).getPilotID() == pilotID) {
			cout << "Flight #" << i + 1 << ": " << endl;
			cout << "Plane ID: " << flights.at(i).getTailNumber() << endl;
			cout << "Pilot ID: " << flights.at(i).getPilotID() << endl;
			cout << "Copilot ID: " << flights.at(i).getCopilotID() << endl;
			cout << "First cabin crew member ID: " << flights.at(i).getFirstCabinCrewID() << endl;
			cout << "Second cabin crew member ID: " << flights.at(i).getSecondCabinCrewID() << endl;
			cout << "Third cabin crew member ID: " << flights.at(i).getThirdCabinCrewID() << endl;
			cout << "Start date: " << flights.at(i).getStartDate() << endl;
			cout << "End date: " << flights.at(i).getEndDate() << endl;
			cout << "Start time: " << flights.at(i).getStartTime() << endl;
			cout << "End time: " << flights.at(i).getEndTime() << endl;
			cout << "Start airport code: " << flights.at(i).getStartAirportCode() << endl;
			cout << "End airport code: " << flights.at(i).getEndAirportCode() << endl;
			cout << "Number of passengers: " << flights.at(i).getNumPassengers() << endl;
			cout << "Status: " << flights.at(i).getStatus() << endl;
		}
	}
}

void FlightCollection::printFlights() {
	for (int i = 0; i < flights.size(); i++) {
		printFlight(flights.at(i).getTailNumber(), flights.at(i).getPilotID());
		cout << endl;
		cout << endl;
	}
}

void FlightCollection::printPlaneAssignments(string tailNumber) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getTailNumber().compare(tailNumber) == 0) {
			printFlight(tailNumber, flights.at(i).getPilotID());
		}
		cout << endl;
	}
}

void FlightCollection::printCrewAssignments(int ID) {
	for (int i = 0; i < flights.size(); i++) {
		if (flights.at(i).getPilotID() == ID || flights.at(i).getCopilotID() == ID || flights.at(i).getFirstCabinCrewID() == ID || flights.at(i).getSecondCabinCrewID() == ID || flights.at(i).getThirdCabinCrewID() == ID) {
			printFlight(flights.at(i).getTailNumber(), flights.at(i).getPilotID());
		}
		cout << endl;
	}
}

int FlightCollection::size() {
	return flights.size();
}

Flight FlightCollection::at(int index) {
	return flights.at(index);
}

