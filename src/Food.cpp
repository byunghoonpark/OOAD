#include "Food.h"

vector< pair<string, int >> food_list;

Food::Food() {
	food_list.push_back(pair<string, int>("�ֵ���", 5000));
	food_list.push_back(pair<string, int>("��«��", 2000));
	food_list.push_back(pair<string, int>("¥�İ�Ƽ", 2000));
	food_list.push_back(pair<string, int>("��ġ������", 3000));
	food_list.push_back(pair<string, int>("�������", 2000));
	food_list.push_back(pair<string, int>("ġ�ƽ", 1000));
}

Food::~Food() {}