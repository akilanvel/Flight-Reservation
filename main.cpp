#include "flightCollection.h"
#include "airplaneCollection.h"
#include "crewMemberCollection.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void printMenu();
void save(ofstream fout, vector<CrewMember> crewMembers, vector<Airplane> airplanes, vector<Flight> flights);
void load(ifstream fin, vector<CrewMember> crewMembers, vector<Airplane> airplanes, vector<Flight> flights);

int main() {
	cout << "Name: Akilan Gnanavel" << endl;
	cout << "Course: CSCE 1040" << endl;
	cout << "Email: akilangnanavel@my.unt.edu" << endl;
	cout << "Program: Homework 4" << endl;

	CrewMemberCollection crewMembers;
	AirplaneCollection airplanes;
	FlightCollection flights;


	string option = "";
	while (option != "q") {
		printMenu();
		cin >> option;
		if (option == "a") {
			cout << "Enter the crew member's name" << endl;
			string name;
			cin.ignore();
			getline(cin, name);
			cout << "Enter the crew member's ID" << endl;
			int ID;
			cin >> ID;
			cout << "Enter the crew member's type (pilot, copilot, cabin)" << endl;
			string type;
			cin >> type;
			cout << "Enter the crew member's status (\"Available\" or \"Not\")" << endl;
			string status;
			cin >> status;
			CrewMember crewMember(name, ID, type, status);
			crewMembers.addCrewMember(crewMember);
			cout << "Crew member added" << endl;
			cout << endl;
		} else if (option == "b") {
			cout << "Enter the crew member's ID" << endl;
			int ID;
			cin >> ID;
			crewMembers.removeCrewMember(ID);
			cout << "Crew member removed" << endl;
			cout << endl;
		} else if (option == "c") {
			cout << "Enter the crew member's ID" << endl;
			int ID;
			cin >> ID;
			cout << "Enter the crew member's new name" << endl;
			string name;
			cin >> name;
			cout << "Enter the crew member's new type" << endl;
			string type;
			cin >> type;
			cout << "Enter the crew member's new status" << endl;
			string status;
			cin >> status;
			crewMembers.editCrewMember(ID, name, type, status);
			cout << "Crew member's information edited" << endl;
			cout << endl;
		} else if (option == "d") {
			cout << "Enter the crew member's ID" << endl;
			int ID;
			cin >> ID;
			crewMembers.printCrewMember(ID);
			cout << endl;
		} else if (option == "e") {
			crewMembers.printCrewMembers();
		} else if (option == "f") {
			cout << "Enter the airplane's make" << endl;
			string make;
			cin >> make;
			cout << "Enter the airplane's model" << endl;
			string model;
			cin >> model;
			cout << "Enter the airplane's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the airplane's number of seats" << endl;
			int numSeats;
			cin >> numSeats;
			cout << "Enter the airplane's range" << endl;
			int range;
			cin >> range;
			cout << "Enter the airplane's status (\"Available\" or \"Not\")" << endl;
			string status;
			cin >> status;
			Airplane airplane(make, model, tailNumber, numSeats, range, status);
			airplanes.addAirplane(airplane);
			cout << "Airplane added" << endl;
			cout << endl;
		} else if (option == "g") {
			cout << "Enter the airplane's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			airplanes.removeAirplane(tailNumber);
			cout << "Airplane removed" << endl;
		} else if (option == "h") {
			cout << "Enter the airplane's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the airplane's new make" << endl;
			string make;
			cin >> make;
			cout << "Enter the airplane's new model" << endl;
			string model;
			cin >> model;
			cout << "Enter the airplane's new number of seats" << endl;
			int numSeats;
			cin >> numSeats;
			cout << "Enter the airplane's new range" << endl;
			int range;
			cin >> range;
			cout << "Enter the airplane's new stats" << endl;
			string status;
			cin >> status;
			airplanes.editAirplane(tailNumber, make, model, numSeats, range, status);
			cout << "Airplane edited" << endl;
			cout << endl;
		} else if (option == "i") {
			cout << "Enter the airplane's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			airplanes.printAirplane(tailNumber);
			cout << endl;
		} else if (option == "j") {
			airplanes.printAirplanes();
		} else if (option == "k") {
			cout << "Enter the flight's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the flight's pilot's ID" << endl;
			int pilotID;
			cin >> pilotID;
			cout << "Enter the flight's copilot's ID" << endl;
			int copilotID;
			cin >> copilotID;
			cout << "Enter the flight's first cabin crew member's ID" << endl;
			int firstCabinCrewID;
			cin >> firstCabinCrewID;
			cout << "Enter the flight's second cabin crew member's ID" << endl;
			int secondCabinCrewID;
			cin >> secondCabinCrewID;
			cout << "Enter the flight's third cabin crew member's ID" << endl;
			int thirdCabinCrewID;
			cin >> thirdCabinCrewID;
			cout << "Enter the flight's start date (in the format YYMMDD)" << endl;
			int startDate;
			cin >> startDate;
			cout << "Enter the flight's end date (in the format YYMMDD)" << endl;
			int endDate;
			cin >> endDate;
			cout << "Enter the flight's start time (in the format HHMM)" << endl;
			int startTime;
			cin >> startTime;
			cout << "Enter the flight's end time (in the format HHMM)" << endl;
			int endTime;
			cin >> endTime;
			cout << "Enter the flight's starting airport code" << endl;
			string startAirportCode;
			cin >> startAirportCode;
			cout << "Enter the flight's ending airport code" << endl;
			string endAirportCode;
			cin >> endAirportCode;
			cout << "Enter the number of passengers on the flight" << endl;
			int numPassengers;
			cin >> numPassengers;
			cout << "Enter the flight's status" << endl;
			string status;
			cin >> status;

			bool legal = true;
			for (int i = 0; i < flights.size(); i++) {
				int tempStartDate = flights.at(i).getStartDate();
				int tempEndDate = flights.at(i).getEndDate();
				int tempStartTime = flights.at(i).getStartTime();
				int tempEndTime = flights.at(i).getEndTime();
				int startYear = startDate % 10000;
				int endYear = endDate % 10000;
				int tempStartYear = tempStartDate % 10000;
				int tempEndYear = tempEndDate % 10000;
				if (flights.at(i).getTailNumber().compare(tailNumber) == 0 || flights.at(i).getPilotID() == pilotID || flights.at(i).getCopilotID() == copilotID || flights.at(i).getFirstCabinCrewID() == firstCabinCrewID || flights.at(i).getSecondCabinCrewID() == secondCabinCrewID || flights.at(i).getThirdCabinCrewID() == thirdCabinCrewID) {
					if (startYear == endYear && tempStartYear == tempEndYear && startYear == tempStartYear) {
						if (startDate == endDate && tempStartDate == tempEndDate) {
							if ((startTime >= tempStartTime && startTime <= tempEndTime) || (endTime >= tempStartTime && endTime <= tempEndTime)) {
								legal = false;
							}
						}
						if ((startDate >= tempStartDate && startDate <= tempEndDate) || (endDate >= tempStartDate && endDate <= tempEndDate)) {
							legal = false;
						}
						if (startDate == tempEndDate) {
							if (startTime >= tempEndTime) {
								legal = false;
							}
						}
						if (endDate == tempStartDate) {
							if (endTime <= tempStartTime) {
								legal = false;
							}
						}
						if ((tempStartDate >= startDate && tempStartDate <= endDate) || (tempEndDate >= startDate && tempEndDate <= endDate)) {
							legal = false;
						}
					}
				}
			}

			if (legal) {
				Flight flight (tailNumber, pilotID, copilotID, firstCabinCrewID, secondCabinCrewID, thirdCabinCrewID, startDate, endDate, startTime, endTime, startAirportCode, endAirportCode, numPassengers, status);
                        	flights.addFlight(flight);
                        	cout << "Flight added" << endl;
				cout << endl;
			} else {
				cout << "Flight could not be added; resources were not available" << endl;
				cout << endl;
			}

		} else if (option == "l") {
			cout << "Enter the flight's tailNumber" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the flight's pilot's ID" << endl;
			int pilotID;
			cin >> pilotID;
			flights.removeFlight(tailNumber, pilotID);
			cout << "Flight removed" << endl;
			cout << endl;
		} else if (option == "m") {
			cout << "Enter the flight's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the flight's pilot's ID" << endl;
			int pilotID;
			cin >> pilotID;
			cout << "Enter the flight's new copilot ID" << endl;
			int copilotID;
			cin >> copilotID;
			cout << "Enter the flight's new first cabin crew member's ID" << endl;
			int firstCabinCrewID;
			cin >> firstCabinCrewID;
			cout << "Enter the flight's new second cabin crew member's ID" << endl;
			int secondCabinCrewID;
			cin >> secondCabinCrewID;
			cout << "Enter the flight's new third cabin crew member's ID" << endl;
			int thirdCabinCrewID;
			cin >> thirdCabinCrewID;
			cout << "Enter the flight's new start date (YYMMDD)" << endl;
			int startDate;
			cin >> startDate;
			cout << "Enter the flight's new end date (YYMMDD)" << endl;
			int endDate;
			cin >> endDate;
			cout << "Enter the flight's new start time (HHMM)" << endl;
			int startTime;
			cin >> startTime;
			cout << "Enter the flight's new end time (HHMM)" << endl;
			int endTime;
			cin >> endTime;
			cout << "Enter the flight's new starting airport code" << endl;
			string startAirportCode;
			cin >> startAirportCode;
			cout << "Enter the flight's new ending airport code" << endl;
			string endAirportCode;
			cin >> endAirportCode;
			cout << "Enter the flight's new number of passengers" << endl;
			int numPassengers;
			cin >> numPassengers;
			cout << "Enter the flight's new status" << endl;
			string status;
			cin >> status;
			flights.editFlight(tailNumber, pilotID, copilotID, firstCabinCrewID, secondCabinCrewID, thirdCabinCrewID, startDate, endDate, startTime, endTime, startAirportCode, endAirportCode, numPassengers, status);
			cout << "The flight has been edited" << endl;
		} else if (option == "n") {
			cout << "Enter the flight's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			cout << "Enter the flight's pilot's ID" << endl;
			int pilotID;
			cin >> pilotID;
			flights.printFlight(tailNumber, pilotID);
			cout << endl;
		} else if (option == "o") {
			flights.printFlights();
			cout << endl;
		} else if (option == "p") {
			cout << "Enter the crew member's ID" << endl;
			int ID;
			cin >> ID;
			flights.printCrewAssignments(ID);
			cout << endl;
		} else if (option == "r") {
			cout << "Enter the airplane's tail number" << endl;
			string tailNumber;
			cin >> tailNumber;
			flights.printPlaneAssignments(tailNumber);
			cout << endl;
		}
	}

	return 0;
}

void printMenu() {
	cout << "a - Add a crew member" << endl;
	cout << "b - Delete a crew Member" << endl;
	cout << "c - Edit a crew member's information" << endl;
	cout << "d - Print a crew member's information" << endl;
	cout << "e - Print the information of every crew member" << endl;
	cout << "f - Add an airplane" << endl;
	cout << "g - Delete an airplane" << endl;
	cout << "h - Edit an airplane's information" << endl;
	cout << "i - Print an airplane's information" << endl;
	cout << "j - Print the information of every airplane" << endl;
	cout << "k - Add a flight" << endl;
	cout << "l - Delete a flight" << endl;
	cout << "m - Edit a flight's information" << endl;
	cout << "n - Print a flight's information" << endl;
	cout << "o - Print the information of every flight" << endl;
	cout << "p - Print a crew member's assignments" << endl;
	cout << "q - Quit" << endl;
	cout << "r - Print an airplane's assignments" << endl;
	cout << endl;
	cout << "Choose an option: " << endl;
}

void save(ofstream fout, vector<CrewMember> crewMembers, vector<Airplane> airplanes, vector<Flight> flights) {

}

void load(ifstream fin, vector<CrewMember> crewMembers, vector<Airplane> airplanes, vector<Flight> flights) {

}
