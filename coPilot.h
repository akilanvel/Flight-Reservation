#include <iostream>
#include "crewMember.h"
#include <string>

using namespace std;

class CoPilot : public CrewMember {
	public:
		CoPilot() : CrewMember() {
			rating = "";
			cumulativeHours = 0;
		}
		CoPilot(string rating1, int cumulativeHours1, string name1, int ID1, string status1) : CrewMember(name1, ID1, status1) {
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
