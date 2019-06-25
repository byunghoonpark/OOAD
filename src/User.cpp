#include "User.h"
#include <iostream>
#include <string>
using namespace std;

vector<User> UserList;

User::User() {
	this->id = "";
	this->pw = "";
	this->birth = "";
	this->remainTime = 0;
	this->seatNumber = -1;
}
User::~User() {}

void User::setID(string id) {
	this->id = id;
}
void User::setPW(string pw) {
	this->pw = pw;
}
void User::setBirth(string birth) {
	this->birth = birth;
}
void User::setRemainTime(int remainTime) {
	this->remainTime += remainTime;
}

void User::setSeatNumber(int seatNumber) {
	this->seatNumber = seatNumber;
}

string User::getID() {
	return this->id;
}
string User::getPW() {
	return this->pw;
}
string User::getBirth() {
	return this->birth;
}
int User::getRemainTime() {
	return this->remainTime;
}
int User::getSeatNumber() {
	return this->seatNumber;
}

