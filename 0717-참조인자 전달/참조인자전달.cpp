/* 함수 인자 전달.cpp
* 
(값)을 전달 == 복사본
&주소 전달 == 원본
*p 참조자 전달 == 원본

-> 객체 전달 시 원본 전달 -> &주소 전달 

-> 객체 전달 시 복사본 전달 -> *p 참조자 전달

이유 : c++은 c보다 구조적 느릴 수 밖에 없다.
		c++ 최적화 -> 객체 생성을 최소화 시키기.

*/ 

#include <iostream>

using namespace std; 

class Limbus
{
public:
	Limbus() {
		cout << "Limbus::Company()" << endl;
	}
	Limbus(const Limbus &r) { //Dcorp is copy the value from the  const limbus &d 
		cout << "Limbus::Company(Limbus)" << endl;
	}
	~Limbus() {
		cout << "Sweeper::~Limbus()" << endl;
	}
};

void Dcorp(const Limbus& L1) { // 값전달 

}

void Jcorp(Limbus* p) { //포인터 

}


int main() {
	
	Limbus L1;
	Dcorp(L1);
	Jcorp(&L1);

	return 0; 
}