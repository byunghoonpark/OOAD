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
	cout << U.getID() << "���� �¼���ȣ�� " << U.getSeatNumber() << " �Դϴ�." << endl;

	cout << "���� �� �¼�: ";
	for (int i = 1; i <= 100; i++) {
		if (seat[i].getUserID() == "")
			cout << i << ' ';
	}

	cout << endl;
	cout << "���� �¼���� �̵� �����մϴ�. ���ϴ� �¼���ȣ�� �Է��ϼ���." << endl;
	cin >> wantSeats;
	cout << wantSeats << "�� �¼����� �̵��մϴ�! " << endl;

	U.setSeatNumber(wantSeats);
	seat[wantSeats].setUserID(U.getID());
	seat[curSeats].setUserID("");

	cout << endl;
	cout << U.getID() << "���� �¼���ȣ�� " << U.getSeatNumber() << " �Դϴ�." << endl;
	cout << wantSeats << "�� �¼���ȣ�� " << "UserID: " << seat[wantSeats].getUserID() << endl;
	cout << endl;
}