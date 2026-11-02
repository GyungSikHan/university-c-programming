#pragma once
#include <iostream>
using namespace std;
class Animal {
protected://접근이 필요한 애만 접근을 시켜줌
	int _age;
	int _weight;
	int _height;

public:
	Animal(int age, int weight, int height) {
		_age = age;
		_weight = weight;
		_height = height;
	}

	Animal() {
		_age = 0;
		_weight = 0;
		_height = 0;
	}//기본생성자가 받는값

	void speak() {
		cout << "age=" << _age;
		cout << "weight=" << _weight;
		cout << "height=" << _height;
		cout << "나는 입니다" << endl;
	}

};//상속을 하기위해 겹치는 코드를 써줌