#include "Login.h"
#include "User.h"

Login::Login() {}
bool Login::LoginDisplay() {
	string tmp1, tmp2;
	cout << "*******************************************" << endl;
	cout << "*                                         *" << endl;
	cout << "            로그인 단계 입니다.               " << endl;
	cout << "*                                         *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "ID를 입력하시오: ";
	cin >> login_id;
	cout << "PW를 입력하시오: ";
	cin >> login_pw;
	cout << endl;
	
	return checkUserInfo(login_id, login_pw);
}
bool Login::checkUserInfo(string login_id, string login_pw) {
	int len = UserList.size();
	bool check = false;
	for (int i = 0; i < len; i++) {
		cout << "회원을 검색 중 입니다. 잠시만 기다려주세요. " << endl;
		if (UserList[i].getID() == login_id && UserList[i].getPW() == login_pw) {
			check = true;
			cout << "회원 정보를 찾았습니다!" << endl;
			cout << endl;
			break;
		}
	}
	return check;
}

Login::~Login(){}