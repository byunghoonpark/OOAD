#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <string>
using namespace std;

class Login {
private:
	string login_id;
	string login_pw;
public:
	Login();
	bool LoginDisplay();
	bool checkUserInfo(string login_id, string login_pw);
	~Login();
};
#endif