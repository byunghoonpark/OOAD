#ifndef SUPERVISE_H
#define SUPERVISE_H
#include "Payment.h"

class SuperviseTime {
public:
	Payment payment;
	void chargeUserRemainTime(User &U);
	void UserRemainTime(User &U);
};

class SuperviseOrderFood {
public:
	Payment payment;
	void chargeUserRemainFood(User &U, int ordermoney);
	void completeOrderFood(User &U);
};

#endif