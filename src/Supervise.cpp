#include "Supervise.h"
#include <iostream>
#include <string>
using namespace std;

void SuperviseTime::chargeUserRemainTime(User &U) {
	int type;
	cout << endl;
	cout << "*** OOAD PC���� �ð����� �ܰ� �Դϴ�. ��������� �������ּ���. ***" << endl;
	cout << "1. ī�����" << endl;
	cout << "2. ���ݰ���" << endl;
	cout << endl;
	cin >> type;
	payment.displayUserPayment(U);
	if (type == 1) {
		Card card;
		card.CardPayment_Time(U);
	}
	if (type == 2) {
		Cash cash;
		cash.CashPayment_Time(U);
	}
}

void SuperviseTime::UserRemainTime(User &U) {
	cout << "���� " << U.getID() << "���� ��� ������ �ð��� " << U.getRemainTime() << "�ð� �Դϴ�." << endl;
	cout << endl;
}


void SuperviseOrderFood::chargeUserRemainFood(User &U, int ordermoney) {
	int type;
	cout << "�����ֹ� �ܰ� �Դϴ�. ��������� �������ּ���." << endl;
	cout << "1. ī�����" << endl;
	cout << "2. ���ݰ���" << endl;
	cout << endl;

	cin >> type;
	payment.displayUserPayment(U);

	if (type == 1) {
		Card card;
		card.CardPayment_Food(U, ordermoney);
	}
	if (type == 2) {
		Cash cash;
		cash.CashPayment_Food(U, ordermoney);
	}
}
void SuperviseOrderFood::completeOrderFood(User &U) {
	cout << U.getID() << "�� 10�� �̳��� �ֹ��� ������ �Ϸ�˴ϴ� ^^! " << endl;
	cout << endl;
}