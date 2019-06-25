#include "OrderFood.h"
#include <iostream>

OrderFood::OrderFood() {}
OrderFood::~OrderFood() {}

void OrderFood::displayFoodList(User &U) {
	cout << "*** OOAD PC방의 음식주문 단계 입니다. ***" << endl;
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
	cout << U.getID() << " 님. 주문 할 음식의 이름을 입력해주세요: ";
	cout << "단, 화면에 출력 된 음식만 주문 가능합니다." << endl;
	cout << endl;
	cin >> orderfood;
	cout << endl;
	int food_len = food_list.size();
	for (int i = 0; i < food_len; i++) {
		cout << "음식을 검색 중 입니다. 잠시만 기다려주세요." << endl;
		if (orderfood == food_list[i].first) {
			cout << food_list[i].first << " 주문하셨습니다." << endl;
			cout << food_list[i].first << "의 금액은 " << food_list[i].second << "원 입니다." << endl;
			ordermoeny = food_list[i].second;
			break;
		}
	}
	cout << endl;
	supervise_food.chargeUserRemainFood(U, ordermoeny);
	supervise_food.completeOrderFood(U);
}