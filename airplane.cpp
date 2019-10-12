#include "airplane.h"
#include <iostream>
#include <string>

using namespace std;

string Airplane::getMake() {
	return make;
}

string Airplane::getModel() {
	return model;
}

string Airplane::getTailNumber() {
	return tailNumber;
}

int Airplane::getNumSeats() {
	return numSeats;
}

int Airplane::getRange() {
	return range;
}

string Airplane::getStatus() {
	return status;
}

void Airplane::setMake(string make1) {
	make = make1;
}

void Airplane::setModel(string model1) {
	model = model1;
}

void Airplane::setTailNumber(string tailNumber1) {
	tailNumber = tailNumber1;
}

void Airplane::setNumSeats(int numSeats1) {
	numSeats = numSeats1;
}

void Airplane::setRange(int range1) {
	range = range1;
}

void Airplane::setStatus(string status1) {
	status = status1;
}

Airplane::Airplane() {
	make = "";
	model = "";
	tailNumber = "";
	numSeats = 0;
	range = 0;
	status = "";
}

Airplane::Airplane(string make1, string model1, string tailNumber1, int numSeats1, int range1, string status1) {
	make = make1;
	model = model1;
	tailNumber = tailNumber1;
	numSeats = numSeats1;
	range = range1;
	status = status1;
}
