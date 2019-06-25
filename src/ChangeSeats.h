#ifndef CHANGESEATS_H
#define CHANGESEATS_H
#include "User.h"
#include "Seats.h"

class ChangeSeats {
public:
	ChangeSeats();
	~ChangeSeats();
	void changeCurPos(User &U);
};

#endif