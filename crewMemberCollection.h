#include <string>
#include "crewMember.h"
#include <vector>

using namespace std;

class CrewMemberCollection {
	public:
		void addCrewMember(CrewMember crewMember);
		void removeCrewMember(int ID);
		void editCrewMember(int ID, string name, string type, string status);
		CrewMember findCrewMember(int ID);
		void printCrewMembers();
		void printCrewMember(int ID);
		CrewMemberCollection();
	private:
		vector<CrewMember> crewMembers;
};
