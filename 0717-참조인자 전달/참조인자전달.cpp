/* �Լ� ���� ����.cpp
* 
(��)�� ���� == ���纻
&�ּ� ���� == ����
*p ������ ���� == ����

-> ��ü ���� �� ���� ���� -> &�ּ� ���� 

-> ��ü ���� �� ���纻 ���� -> *p ������ ����

���� : c++�� c���� ������ ���� �� �ۿ� ����.
		c++ ����ȭ -> ��ü ������ �ּ�ȭ ��Ű��.

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

void Dcorp(const Limbus& L1) { // ������ 

}

void Jcorp(Limbus* p) { //������ 

}


int main() {
	
	Limbus L1;
	Dcorp(L1);
	Jcorp(&L1);

	return 0; 
}