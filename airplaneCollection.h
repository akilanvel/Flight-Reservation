#include <vector>
#include <string>
#include "airplane.h"

using namespace std;

class AirplaneCollection {
	public:
		void addAirplane(Airplane airplane);
		void removeAirplane(string tailNumber);
		void editAirplane(string tailNumber, string make, string model, int numSeats, int range, string status);
		Airplane findAirplane(string tailNumber);
		void printAirplanes();
		void printAirplane(string tailNumber);
		AirplaneCollection();
	private:
		vector<Airplane> airplanes;
};
