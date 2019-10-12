#include <iostream>
#include "crewMember.h"
#include <string>

using namespace std;

class Pilot : public CrewMember {
	public:
		Pilot() : CrewMember() {
			rating = "";
			cumulativeHours = 0;
		}
		Pilot(string rating1, int cumulativeHours1, string name1, int ID1, string status1) : CrewMember(name1, ID1, status1) {
			rating = rating1;
			cumulativeHours = cumulativeHours1;
		}
		string getRating();
		int getCumulativeHours();
		void setRating(string rating1);
		void printInfo();
		void setCumulativeHours(int cumulativeHours1);
	private:
		string rating;
		int cumulativeHours;
};
