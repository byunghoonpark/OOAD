#include "Login.h"
#include "User.h"

Login::Login() {}
bool Login::LoginDisplay() {
	string tmp1, tmp2;
	cout << "*******************************************" << endl;
	cout << "*                                         *" << endl;
	cout << "            �α��� �ܰ� �Դϴ�.               " << endl;
	cout << "*                                         *" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "ID�� �Է��Ͻÿ�: ";
	cin >> login_id;
	cout << "PW�� �Է��Ͻÿ�: ";
	cin >> login_pw;
	cout << endl;
	
	return checkUserInfo(login_id, login_pw);
}
bool Login::checkUserInfo(string login_id, string login_pw) {
	int len = UserList.size();
	bool check = false;
	for (int i = 0; i < len; i++) {
		cout << "ȸ���� �˻� �� �Դϴ�. ��ø� ��ٷ��ּ���. " << endl;
		if (UserList[i].getID() == login_id && UserList[i].getPW() == login_pw) {
			check = true;
			cout << "ȸ�� ������ ã�ҽ��ϴ�!" << endl;
			cout << endl;
			break;
		}
	}
	return check;
}

Login::~Login(){}