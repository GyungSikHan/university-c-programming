#include <iostream>
using namespace std;

class Animal {
private:
	int _type;
	int _age;
	int _weight;
	int _height;

public:
	void speak() {
		cout << "age = " << _age << endl;//endl은 줄바꿈
		switch (_type)
		{
		case 0:
			printf("소입니다\n");
			break;
		case 1:
			printf("개입니다\n");
			break;
		case 2:
			printf("돼지입니다\n");
		default:
			break;
		}
	}

	Animal(int type, int age, int weight, int height) {
		_type = type;
		_age = age;
	}

};

void main() {
	Animal a(0, 10, 20, 30);
	a.speak();

	Animal b(1, 10, 20, 30);
	b.speak();

	Animal c(3, 10, 20, 30);
	c.speak();


}

//일반화 반대방법: 클래스르 하나로 만들다가 요청사항이 많아지면 특수한 부분만 상속시키는 것  SpecialInheritance방법