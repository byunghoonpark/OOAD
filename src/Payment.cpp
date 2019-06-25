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
	cout << U.getID() << "�� �������� �մϴ�. (��, �����ݾ��� 1000�� ���� �Դϴ�.)" << endl;
	cout << endl;
}

void Cash::CashPayment_Time(User &U) {
	int inputMoney;
	cout << "���ݰ����� �����ϼ̽��ϴ�. ������ �־��ּ���." << endl;
	cin >> inputMoney;
	cout << inputMoney << "�� �����ϼ̽��ϴ�." << endl;
	U.setRemainTime(inputMoney / 1000);
	cout << endl;

	cout << "*** �����Ϸ� �Ǿ����ϴ�. ***" << endl;
}

void Cash::CashPayment_Food(User &U, int ordermoney) {
	cout << "���ݰ����� �����ϼ̽��ϴ�." << endl;
	cout << "������ ������ ��� �湮�� " << ordermoney << "�� �������ּ���!" << endl;
	cout << endl;
}

void Card::CardPayment_Time(User &U) {
	int inputMoney;
	cout << "ī������� �����ϼ̽��ϴ�. ī�带 �����ϼ���." << endl;
	cout << "���ϴ� �����ݾ��� �Է����ּ���." << endl;
	cin >> inputMoney;
	cout << inputMoney << "�� �����ϼ̽��ϴ�." << endl;
	U.setRemainTime(inputMoney / 1000);
	cout << endl;

	cout << "�����Ϸ� �Ǿ����ϴ�." << endl;
}

void Card::CardPayment_Food(User &U, int ordermoney) {
	cout << "ī������� �����ϼ̽��ϴ�." << endl;
	cout << "������ ������ ��� �湮�� ī��⸦ ����ϴ�!" << endl;
	cout << ordermoney << "�� �������ּ���!" << endl;
	cout << endl;
}