#include "OrderFood.h"
#include <iostream>

OrderFood::OrderFood() {}
OrderFood::~OrderFood() {}

void OrderFood::displayFoodList(User &U) {
	cout << "*** OOAD PC���� �����ֹ� �ܰ� �Դϴ�. ***" << endl;
	cout << endl;
	int food_len = food_list.size();
	for (int i = 0; i < food_len; i++) {
		cout << food_list[i].first << ' ' << food_list[i].second << endl;
	}
	orderUserFood(U);
}

void OrderFood::orderUserFood(User &U) {
	string orderfood;
	int ordermoeny;
	cout << endl;
	cout << U.getID() << " ��. �ֹ� �� ������ �̸��� �Է����ּ���: ";
	cout << "��, ȭ�鿡 ��� �� ���ĸ� �ֹ� �����մϴ�." << endl;
	cout << endl;
	cin >> orderfood;
	cout << endl;
	int food_len = food_list.size();
	for (int i = 0; i < food_len; i++) {
		cout << "������ �˻� �� �Դϴ�. ��ø� ��ٷ��ּ���." << endl;
		if (orderfood == food_list[i].first) {
			cout << food_list[i].first << " �ֹ��ϼ̽��ϴ�." << endl;
			cout << food_list[i].first << "�� �ݾ��� " << food_list[i].second << "�� �Դϴ�." << endl;
			ordermoeny = food_list[i].second;
			break;
		}
	}
	cout << endl;
	supervise_food.chargeUserRemainFood(U, ordermoeny);
	supervise_food.completeOrderFood(U);
}