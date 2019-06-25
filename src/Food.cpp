#include "Food.h"

vector< pair<string, int >> food_list;

Food::Food() {
	food_list.push_back(pair<string, int>("ÇÖµµ±×", 5000));
	food_list.push_back(pair<string, int>("ÁøÂ«»Í", 2000));
	food_list.push_back(pair<string, int>("Â¥ÆÄ°ÔÆ¼", 2000));
	food_list.push_back(pair<string, int>("±èÄ¡ººÀ½¹ä", 3000));
	food_list.push_back(pair<string, int>("Âü±ú¶ó¸é", 2000));
	food_list.push_back(pair<string, int>("Ä¡Áî½ºÆ½", 1000));
}

Food::~Food() {}