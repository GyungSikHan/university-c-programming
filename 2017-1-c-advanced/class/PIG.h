#pragma once
#include <iostream>
#include"Animal.h"
using namespace std;

class PIG: public Animal {//class PIG를 animal헤더에 상속시켜버림

public:
	PIG(int age, int weight, int height) {
		_age = age;
		_weight = weight;
		_height = height;
	}

	PIG() {
		_age = 0;
		_weight = 0;
		_height = 0;
	}//기본생성자가 받는값

};

//각 헤더파일에 겹치는 코드 말고 필요한 코드만 따로 써준다