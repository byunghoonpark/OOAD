#include "Enroll.h"
#include <iostream>
#include <string>
using namespace std;

enrollNewMember::enrollNewMember() {}
void enrollNewMember::enrollDisplay(User &U) {
	string id, pw, birth, email;
	cout << "*******************************************" << endl;
	cout << "*                                         *" << endl;
	cout << "           ȸ������ �ܰ� �Դϴ�.               " << endl;
	cout << "*                                         *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "ID�� �Է��Ͻÿ�: ";
	cin >> id;
	U.setID(id);

	cout << "PW�� �Է��Ͻÿ�: ";
	cin >> pw;
	U.setPW(pw);

	cout << "��������� �Է��Ͻÿ�: ";
	cin >> birth;
	U.setBirth(birth);

	cout << endl;
	cout << "ȸ�������� �Ϸ�Ǿ����ϴ�! �α����� �����ϼ���!" << endl;
	cout << endl;
	UserList.push_back(U);
}
enrollNewMember::~enrollNewMember() {}

