#include "Seats.h"

Seats seat[101];

Seats::Seats() {
	userID = "";
}

Seats::~Seats() {}

void Seats::setUserID(string userID) {
	this->userID = userID;
}

string Seats::getUserID() {
	return this->userID;
}
