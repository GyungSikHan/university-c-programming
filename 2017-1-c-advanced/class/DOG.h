#pragma once
#include <iostream>
#include"Animal.h"
using namespace std;

class DOG: public Animal {

public:
	DOG(int age, int weight, int height) {
		_age = age;
		_weight = weight;
		_height = height;
	}

	DOG() {
		_age = 0;
		_weight = 0;
		_height = 0;
	}//기본생성자가 받는값

	
};