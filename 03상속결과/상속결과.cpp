#include <iostream>

using namespace std;

class Parent { //부모 클래스 
	int a;
public:
	void fun1() {
		cout << "Parent :: func1" << endl;
	}

};

class Child : public Parent { //자식 클래스 : public 부모클래스 명---> 자식이 부모를 선택함 
public:
	void fun2() {
		cout << "Child :: func2" << endl;
	}
};


int main() {

	cout << sizeof(Child) << endl; //8)(4*4)
	Child c;

	c.fun1();
	c.fun2();
	return 0;
}