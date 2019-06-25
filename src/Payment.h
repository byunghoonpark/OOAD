#ifndef PAYMENT_H
#define PAYMENT_H
#include "User.h"

class Payment {
public:
	Payment();
	~Payment();
	void displayUserPayment(User &U);
};

class Cash : public Payment {
public:
	Cash();
	~Cash();
	void CashPayment_Time(User &U);
	void CashPayment_Food(User &U, int ordermoney);
};

class Card : public Payment {
public:
	Card();
	~Card();
	void CardPayment_Time(User &U);
	void CardPayment_Food(User &U, int ordermoney);
};

#endif