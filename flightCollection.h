#include "flight.h"
#include <vector>
#include <string>

using namespace std;

class FlightCollection {
	public:
		void addFlight(Flight flight);
		void removeFlight(string tailNumber, int pilotID);
		void editFlight(string tailNumber, int pilotID, int copilotID, int firstCabinCrewID, int secondCabinCrewID, int thirdCabinCrewID, int startDate, int endDate, int startTime, int endTime, string startAirportCode, string endAirportCode, int numPassengers, string status);
		Flight findFlight(string tailNumber, int pilotID);
		void printFlights();
		void printFlight(string tailNumber, int pilotID);
		FlightCollection();
		void printCrewAssignments(int ID);
		void printPlaneAssignments(string tailNumber);
		int size();
		Flight at(int index);

	private:
		vector<Flight> flights;
};
