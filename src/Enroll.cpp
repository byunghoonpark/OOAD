#include "Enroll.h"
#include <iostream>
#include <string>
using namespace std;

enrollNewMember::enrollNewMember() {}
void enrollNewMember::enrollDisplay(User &U) {
	string id, pw, birth, email;
	cout << "*******************************************" << endl;
	cout << "*                                         *" << endl;
	cout << "           회원가입 단계 입니다.               " << endl;
	cout << "*                                         *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "ID를 입력하시오: ";
	cin >> id;
	U.setID(id);

	cout << "PW를 입력하시오: ";
	cin >> pw;
	U.setPW(pw);

	cout << "생년원일을 입력하시오: ";
	cin >> birth;
	U.setBirth(birth);

	cout << endl;
	cout << "회원가입이 완료되었습니다! 로그인을 진행하세요!" << endl;
	cout << endl;
	UserList.push_back(U);
}
enrollNewMember::~enrollNewMember() {}

