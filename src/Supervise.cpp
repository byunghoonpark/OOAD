#include "Supervise.h"
#include <iostream>
#include <string>
using namespace std;

void SuperviseTime::chargeUserRemainTime(User &U) {
	int type;
	cout << endl;
	cout << "*** OOAD PC방의 시간충전 단계 입니다. 결제방식을 선택해주세요. ***" << endl;
	cout << "1. 카드결제" << endl;
	cout << "2. 현금결제" << endl;
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
	cout << "현재 " << U.getID() << "님이 사용 가능한 시간은 " << U.getRemainTime() << "시간 입니다." << endl;
	cout << endl;
}


void SuperviseOrderFood::chargeUserRemainFood(User &U, int ordermoney) {
	int type;
	cout << "음식주문 단계 입니다. 결제방식을 선택해주세요." << endl;
	cout << "1. 카드결제" << endl;
	cout << "2. 현금결제" << endl;
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
	cout << U.getID() << "님 10분 이내에 주문한 음식이 완료됩니다 ^^! " << endl;
	cout << endl;
}