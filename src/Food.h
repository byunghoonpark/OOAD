#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

extern vector< pair<string, int >> food_list;

class Food {
public:
	Food();
	~Food();
};

#endif