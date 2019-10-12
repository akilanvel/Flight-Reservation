#include <iostream>
#include "flight.h"
#include <string>

using namespace std;

Flight::Flight() {
	tailNumber = "";
	pilotID = 0;
	copilotID = 0;
	firstCabinCrewID = 0;
	secondCabinCrewID = 0;
	thirdCabinCrewID = 0;
	startDate = 0000;
	endDate = 0;
	startTime = 0;
	endTime = 0;
	startAirportCode = "";
	endAirportCode = "";
	numPassengers = 0;
	status = "";
}

Flight::Flight(string tailNumber1, int pilotID1, int copilotID1, int firstCabinCrewID1, int secondCabinCrewID1, int thirdCabinCrewID1, int startDate1, int endDate1, int startTime1, int endTime1, string startAirportCode1, string endAirportCode1, int numPassengers1, string status1) {
	tailNumber = tailNumber1;
	pilotID = pilotID1;
	copilotID = copilotID1;
	firstCabinCrewID = firstCabinCrewID1;
	secondCabinCrewID = secondCabinCrewID1;
	thirdCabinCrewID = thirdCabinCrewID1;
	startDate = startDate1;
	endDate = endDate1;
	endTime = endTime1;
	startTime = startTime1;
	startAirportCode = startAirportCode1;
	endAirportCode = endAirportCode1;
	numPassengers = numPassengers1;
	status = status1;
}

string Flight::getTailNumber() {
	return tailNumber;
}

int Flight::getPilotID() {
	return pilotID;
}

int Flight::getCopilotID() {
	return copilotID;
}

int Flight::getFirstCabinCrewID() {
	return firstCabinCrewID;
}

int Flight::getSecondCabinCrewID() {
	return secondCabinCrewID;
}

int Flight::getThirdCabinCrewID() {
	return thirdCabinCrewID;
}

int Flight::getStartDate() {
	return startDate;
}

int Flight::getEndDate() {
	return endDate;
}

int Flight::getStartTime() {
	return startTime;
}

int Flight::getEndTime() {
	return endTime;
}

string Flight::getStartAirportCode() {
	return startAirportCode;
}

string Flight::getEndAirportCode() {
	return endAirportCode;
}

int Flight::getNumPassengers() {
	return numPassengers;
}

string Flight::getStatus() {
	return status;
}

void Flight::setTailNumber(string tailNumber1) {
	tailNumber = tailNumber1;
}

void Flight::setPilotID(int pilotID1) {
	pilotID1 = pilotID;
}

void Flight::setCopilotID(int copilotID1) {
	copilotID = copilotID1;
}

void Flight::setFirstCabinCrewID(int firstCabinCrewID1) {
	firstCabinCrewID = firstCabinCrewID1;
}

void Flight::setSecondCabinCrewID(int secondCabinCrewID1) {
	secondCabinCrewID = secondCabinCrewID1;
}

void Flight::setThirdCabinCrewID(int thirdCabinCrewID1) {
	thirdCabinCrewID = thirdCabinCrewID1;
}

void Flight::setStartDate(int startDate1) {
	startDate = startDate1;
}

void Flight::setEndDate(int endDate1) {
	endDate = endDate1;
}

void Flight::setStartTime(int startTime1) {
	startTime = startTime1;
}

void Flight::setEndTime(int endTime1) {
	endTime = endTime1;
}

void Flight::setStartAirportCode(string startAirportCode1) {
	startAirportCode = startAirportCode1;
}

void Flight::setEndAirportCode(string endAirportCode1) {
	endAirportCode = endAirportCode1;
}

void Flight::setNumPassengers(int numPassengers1) {
	numPassengers = numPassengers1;
}

void Flight::setStatus(string status1) {
	status = status1;
}
