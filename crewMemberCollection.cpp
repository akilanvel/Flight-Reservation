#include <iostream>
#include "crewMemberCollection.h"
#include <string>
#include <vector>

using namespace std;

CrewMemberCollection::CrewMemberCollection() {

}

void CrewMemberCollection::addCrewMember(CrewMember crewMember) {
	crewMembers.push_back(crewMember);
}

void CrewMemberCollection::removeCrewMember(int ID) {
	for (int i = 0; i < crewMembers.size(); i++) {
		if (crewMembers.at(i).getID() == ID) {
			crewMembers.erase(crewMembers.begin() + i);
		}
	}
}

void CrewMemberCollection::editCrewMember(int ID, string name, string type, string status) {
	for (int i = 0; i < crewMembers.size(); i++) {
		if (crewMembers.at(i).getID() == ID) {
			crewMembers.at(i).setStatus(status);
			crewMembers.at(i).setName(name);
			crewMembers.at(i).setType(type);
		}
	}
}

CrewMember CrewMemberCollection::findCrewMember(int ID) {
	for (int i = 0; i < crewMembers.size(); i++) {
		if (crewMembers.at(i).getID() == ID) {
			return crewMembers.at(i);
		}
	}
}

void CrewMemberCollection::printCrewMember(int ID) {
	for (int i = 0; i < crewMembers.size(); i++) {
		if (crewMembers.at(i).getID() == ID) {
			cout << "Crew Member #" << i + 1 << ": " << endl;
			cout << "Name: " << crewMembers.at(i).getName() << endl;
			cout << "ID: " << ID << endl;
			cout << "Type: " << crewMembers.at(i).getType() << endl;
			cout << "Status: " << crewMembers.at(i).getStatus() << endl;
		}
	}
}

void CrewMemberCollection::printCrewMembers() {
	for (int i = 0; i < crewMembers.size(); i++) {
		printCrewMember(crewMembers.at(i).getID());
		cout << endl;
	}
}

