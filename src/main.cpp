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
			cout << "PC종료 합니다." << endl;
			cout << "안녕히가세요" << endl;
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
			cout << "로그인에 성공하였습니다!" << endl;
			cout << endl;

			for (int i = 1; i <= 100; i++) {
				if (seat[i].getUserID() == "") {
					U.setSeatNumber(i);
					seat[i].setUserID(U.getID());
					cout << U.getID() << "님의 좌석은" << i << "번 입니다." << endl;
					cout << endl;
					break;
				}
			}
		}

		else {
			cout << "로그인에 실패하였습니다!" << endl;
			cout << "처음화면으로 다시 시작합니다." << endl;
			cout << endl;
			continue;
		}

		while (true) {

			if (U.getRemainTime() < 1) {
				cout << "<<<< " << U.getID() << "님의 잔여시간이 1시간 이내 입니다. 충전을 진행합니다. >>>>" << endl;
				cout << endl;
				supervise.chargeUserRemainTime(U);
				supervise.UserRemainTime(U);
			}

			f_UI.displayUI();
			cin >> input_num2;

			if (input_num2 == 1) { // 건의사항
				board.suggestionBoard(U);
				continue;
			}
			if (input_num2 == 2) { // 간식주문
				orderFood.displayFoodList(U);
				continue;
			}
			if (input_num2 == 3) { // 자리이동
				changeSeats.changeCurPos(U);
			}
			if (input_num2 == 4) { // 시간충전
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
			cout << U.getID() << "님, 이용해주셔서 감사합니다!" << endl;
			break;
		}
	}
}