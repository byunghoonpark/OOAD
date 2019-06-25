#ifndef USER_H
#define USER_H
#include <vector>
#include <iostream>
using namespace std;

class User {
private:
	string id;
	string pw;
	string birth;
	int remainTime;
	int seatNumber;
public:
	User();
	void setID(string id);
	void setPW(string pw);
	void setBirth(string birth);
	void setRemainTime(int remainTime);
	void setSeatNumber(int seatNumber);
	string getID();
	string getPW();
	string getBirth();
	int getRemainTime();
	int getSeatNumber();
	~User();
};

extern vector<User> UserList;

#endif