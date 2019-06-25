#ifndef ORDERFOOD_H
#define ORDERFOOD_H
#include "Supervise.h"
#include "Food.h"

class OrderFood {
public:
	OrderFood();
	~OrderFood();
	Food food;
	SuperviseOrderFood supervise_food;
	void displayFoodList(User &U);
	void orderUserFood(User &U);
};

#endif