/*

//sample�� stack memory
------------
num2 20
num1 10
------------


sample s1�� �޸� 
------------------
num2[2000]            
num1[1000]                
---------------------


sample s2�� �޸�
-------------------
num2 [4000]
num1 [3000]
------------------

//s1�� heap �޸�
------------------------
2000     20
1000     10
-------------------


//s2�� heap �޸�
------------------------
4000       20

3000       10
------------------------

�������� �����Ϸ����� �����Ǵ� ��������� 
�ּҸ� ������ ���� ������ ������ ���� 

*/

#include <iostream>

using namespace std;

class sample {
private:
	int num1;
	int num2;


public:
	sample(int n1, int n2) {

		num1 = n1;

		num2 = n2;

	}

};

class sample {
private:
	int* pnum1;
	int* pnum2;

public:
	sample(int n1, int n2)
	{
		pnum1 = new int; 
		*pnum1 = n1;

		pnum2 = new int(n2);
		
	}

public: 
	void print() {
		
	}
};



int main() {


	return 0;
}