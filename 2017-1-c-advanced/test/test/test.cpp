// test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
void func(int** p, int** q)
{
	int* t = *p;
	*p = *q;
	*q = t;
	**p = 3;
}

//int sum(int n)
//{
//	return n + sum(n - 1);
//}

class Base
{
public:
	Base() = default;
	virtual void foo() { cout << "foo" << endl; }
	void boo() { cout << "boo" << endl; }
};

class Derived : public Base
{
public:
	Derived() = default;
	virtual void foo() override { cout << "Derived foo" << endl; }
	void boo() { cout << "Derived boo" << endl; }
};

struct A
{
	char a;
	double b;
	int c;
	short d;
	float e;
};

struct B
{
	A a;
	bool g;
};

int main()
{
	//int a = 1, b = 1;
	//int* pa = &a;
	//int* pb = &b;
	//func(&pa, &pb);
	//cout << *pa << " " << *pb;

	//sum(1);

	//Derived* D = new Derived{};
	//Base* B = static_cast<Base*>(D);
	//
	//D->foo();
	//B->foo();
	//D->boo();
	//B->boo();

	//A a;
	//B b;
	//cout << sizeof(a) << endl;
	//cout << sizeof(b) << endl;
	//cout << alignof(A) << endl;
	//cout << alignof(B) << endl;

	float e = 0.0f;
	float a = 0.0f / e, b = 0.0f / e, c = 0.0f / e, d = 0.0f / e;

	if (a == b)
		cout << "==" << endl;
	else
		cout << "!=" << endl;
	if(c == e)
		cout << "==" << endl;
	else
		cout << "!=" << endl;
}
