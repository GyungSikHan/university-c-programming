#include<iostream>
using namespace std;
class PIG {//Object: pig라는 대상객체를 지정
private: //접근제어자
	int age;//추상화: 대상을 단순화함
	int weight;
	int height;

public:

	void speak() {
		cout << "나는 돼지입니다" << endl;
	}
	void move() {
		cout << "왼쪽으로 움직입니다" << endl;
	}
};// 캡슐화:{}란에 추상화한 데이터들을 묶어논것

class DOG {
private:
	int age;
	int weight;
	int height;

public:
	void speak() {
		cout << "나는 개입니다" << endl;
	}
	void move() {
		cout << "오른쪽으로 움직입니다" << endl;
	}
};

void main() {
	PIG a;//object:객체, class형 테이터 타입으로 만든 변수
	a.speak();
	a.move();
	a.age = 20;

	DOG b;
	b.speak();
	b.move();
}//함수는 메모리공간에 적용되지 않는다