#include "UI.h"
#include "User.h"
#include "Login.h"
#include "Enroll.h"
#include "Board.h"
#include "Payment.h"
#include "ChangeSeats.h"
#include "Food.h"
#include "OrderFood.h"
#include "Seats.h"
#include "Supervise.h"

void playPCroomService();

int main(void) {
	playPCroomService();
	return 0;
}

void playPCroomService() {
	
	bool curProcess = true;
	int input_num1, input_num2;
	
	User U;
	INIT_UI init_UI;
	SuperviseTime supervise;
	Function_UI f_UI; 
	Board board; 
	OrderFood orderFood; 
	ChangeSeats changeSeats;

	while (true) {

		bool loginFlag;
		init_UI.displayUI(); 
		Login login;
		cin >> input_num1;

		if (input_num1 == 3) {
			cout << "PC���� �մϴ�." << endl;
			cout << "�ȳ���������" << endl;
			cout << endl;
			break;
		}

		if (input_num1 == 2) { 
			enrollNewMember enm;
			enm.enrollDisplay(U);
		}

		loginFlag = login.LoginDisplay();

		if (loginFlag) {
			cout << endl;
			cout << "�α��ο� �����Ͽ����ϴ�!" << endl;
			cout << endl;

			for (int i = 1; i <= 100; i++) {
				if (seat[i].getUserID() == "") {
					U.setSeatNumber(i);
					seat[i].setUserID(U.getID());
					cout << U.getID() << "���� �¼���" << i << "�� �Դϴ�." << endl;
					cout << endl;
					break;
				}
			}
		}

		else {
			cout << "�α��ο� �����Ͽ����ϴ�!" << endl;
			cout << "ó��ȭ������ �ٽ� �����մϴ�." << endl;
			cout << endl;
			continue;
		}

		while (true) {

			if (U.getRemainTime() < 1) {
				cout << "<<<< " << U.getID() << "���� �ܿ��ð��� 1�ð� �̳� �Դϴ�. ������ �����մϴ�. >>>>" << endl;
				cout << endl;
				supervise.chargeUserRemainTime(U);
				supervise.UserRemainTime(U);
			}

			f_UI.displayUI();
			cin >> input_num2;

			if (input_num2 == 1) { // ���ǻ���
				board.suggestionBoard(U);
				continue;
			}
			if (input_num2 == 2) { // �����ֹ�
				orderFood.displayFoodList(U);
				continue;
			}
			if (input_num2 == 3) { // �ڸ��̵�
				changeSeats.changeCurPos(U);
			}
			if (input_num2 == 4) { // �ð�����
				supervise.chargeUserRemainTime(U);
				supervise.UserRemainTime(U);
				continue;
			}
			if (input_num2 == 5) {
				curProcess = false;
				break;
			}
		}

		if (curProcess == false) {
			cout << U.getID() << "��, �̿����ּż� �����մϴ�!" << endl;
			break;
		}
	}
}