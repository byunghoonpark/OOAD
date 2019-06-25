#ifndef SEATS_H
#define SEATS_H
#include <iostream>
using namespace std;

class Seats {
private:
	string userID;
public:
	Seats();
	~Seats();
	void setUserID(string userID);
	string getUserID();
};

extern Seats seat[101];

#endif