#include <iostream>
#include "crewMember.h"
#include <string>

using namespace std;

class Cabin : public CrewMember {
	public:
		Cabin() : CrewMember() {
			position = "";
		}
		Cabin(string position1, string name1, int ID1, string status1) {
			position = position1;
		}
		string getPosition();
		void setPosition(string position1);
		void printInfo();
	private:
		string position;
};
