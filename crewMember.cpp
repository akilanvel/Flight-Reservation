#include <iostream>
#include "crewMember.h"
#include <string>

using namespace std;

CrewMember::CrewMember() {
	name = "";
	ID = 0;
	status = "";
}

CrewMember::CrewMember(string name1, int ID1, string status1) {
	name = name1;
	ID = ID1;
	status = status1;
}

string CrewMember::getName() {
	return name;
}

int CrewMember::getID() {
	return ID;
}

string CrewMember::getStatus() {
	return status;
}

void CrewMember::setName(string name1) {
	name = name1;
}

void CrewMember::setID(int ID1) {
	ID = ID1;
}

void CrewMember::setStatus(string status1) {
	status = status1;
}

void CrewMember::printInfo() {
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "Status: " << status << endl;
}
