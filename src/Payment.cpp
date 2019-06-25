#include "Payment.h"
#include <iostream>
#include <string>
using namespace std;

Payment::Payment() {}
Payment::~Payment() {}
Cash::Cash() {}
Cash::~Cash() {}
Card::Card() {}
Card::~Card() {}

void Payment::displayUserPayment(User &U) {
	cout << U.getID() << "님 결제진행 합니다. (단, 충전금액은 1000원 단위 입니다.)" << endl;
	cout << endl;
}

void Cash::CashPayment_Time(User &U) {
	int inputMoney;
	cout << "현금결제를 선택하셨습니다. 현금을 넣어주세요." << endl;
	cin >> inputMoney;
	cout << inputMoney << "를 삽입하셨습니다." << endl;
	U.setRemainTime(inputMoney / 1000);
	cout << endl;

	cout << "*** 결제완료 되었습니다. ***" << endl;
}

void Cash::CashPayment_Food(User &U, int ordermoney) {
	cout << "현금결제를 선택하셨습니다." << endl;
	cout << "직원이 음식을 들고 방문시 " << ordermoney << "원 지불해주세요!" << endl;
	cout << endl;
}

void Card::CardPayment_Time(User &U) {
	int inputMoney;
	cout << "카드결제를 선택하셨습니다. 카드를 삽입하세요." << endl;
	cout << "원하는 충전금액을 입력해주세요." << endl;
	cin >> inputMoney;
	cout << inputMoney << "원 선택하셨습니다." << endl;
	U.setRemainTime(inputMoney / 1000);
	cout << endl;

	cout << "결제완료 되었습니다." << endl;
}

void Card::CardPayment_Food(User &U, int ordermoney) {
	cout << "카드결제를 선택하셨습니다." << endl;
	cout << "직원이 음식을 들고 방문시 카드기를 들고갑니다!" << endl;
	cout << ordermoney << "원 지불해주세요!" << endl;
	cout << endl;
}