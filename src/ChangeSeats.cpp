#include <iostream>
#include <string>
#include "ChangeSeats.h"

using namespace std;
// Seats seat[101];
ChangeSeats::ChangeSeats() {}
ChangeSeats::~ChangeSeats() {}

void ChangeSeats::changeCurPos(User &U) {
	int wantSeats;
	int curSeats = U.getSeatNumber();
	cout << endl;
	cout << U.getID() << "님의 좌석번호는 " << U.getSeatNumber() << " 입니다." << endl;

	cout << "현재 빈 좌석: ";
	for (int i = 1; i <= 100; i++) {
		if (seat[i].getUserID() == "")
			cout << i << ' ';
	}

	cout << endl;
	cout << "위의 좌석들로 이동 가능합니다. 원하는 좌석번호를 입력하세요." << endl;
	cin >> wantSeats;
	cout << wantSeats << "번 좌석으로 이동합니다! " << endl;

	U.setSeatNumber(wantSeats);
	seat[wantSeats].setUserID(U.getID());
	seat[curSeats].setUserID("");

	cout << endl;
	cout << U.getID() << "님의 좌석번호는 " << U.getSeatNumber() << " 입니다." << endl;
	cout << wantSeats << "번 좌석번호의 " << "UserID: " << seat[wantSeats].getUserID() << endl;
	cout << endl;
}