#include<iostream>
#include"PIG.h"
#include"COW.h"
#include"DOG.h"
#include"Animal.h"
using namespace std;




void main() {
	PIG a(10, 20, 30);//생성자,PIG()는 아무것도 받지않는 생성자,생성자를 하나라도 만들면 기본 생성자는 사용 불가
	PIG b(40., 50, 60);
	PIG c(70, 80, 90);
	PIG k;//기본생성자


	a.speak();
	b.speak();
	c.speak();
	k.speak();

	COW e(1, 2, 3);//생성자,PIG()는 아무것도 받지않는 생성자,생성자를 하나라도 만들면 기본 생성자는 사용 불가
	COW f(4., 5, 6);
	COW g(7, 8, 9);
	COW h;//기본생성자


	e.speak();
	f.speak();
	g.speak();
	h.speak();

	DOG q(4, 5, 6);//생성자,PIG()는 아무것도 받지않는 생성자,생성자를 하나라도 만들면 기본 생성자는 사용 불가
	DOG qq(4, 8, 6);
	DOG ww(7,22, 9);
	DOG w;//기본생성자


	q.speak();
	qq.speak();
	ww.speak();
	w.speak();
}
//일반화 상속: 여러개의 헤더파일에 같은 내용을 부모 헤더파일을 내용을 넣은뒤 자식 헤더파일을 부모 헤더파일에 상속시키는 방법