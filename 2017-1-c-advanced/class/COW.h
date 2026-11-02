#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class COW : public Animal{

public:

	COW(int age, int weight, int height) {
		_age = age;
		_weight = weight;
		_height = height;
	}

	COW() {
		_age = 0;
		_weight = 0;
		_height = 0;
	}//기본생성자가 받는값

};