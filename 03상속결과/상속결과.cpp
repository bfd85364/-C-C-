#include <iostream>

using namespace std;

class Parent { //�θ� Ŭ���� 
	int a;
public:
	void fun1() {
		cout << "Parent :: func1" << endl;
	}

};

class Child : public Parent { //�ڽ� Ŭ���� : public �θ�Ŭ���� ��---> �ڽ��� �θ� ������ 
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