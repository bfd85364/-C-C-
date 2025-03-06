/*

//sample의 stack memory
------------
num2 20
num1 10
------------


sample s1의 메모리 
------------------
num2[2000]            
num1[1000]                
---------------------


sample s2의 메모리
-------------------
num2 [4000]
num1 [3000]
------------------

//s1의 heap 메모리
------------------------
2000     20
1000     10
-------------------


//s2의 heap 메모리
------------------------
4000       20

3000       10
------------------------

기족으로 컴파일러에서 제공되는 복사생성는 
주소를 복사해 오기 때문에 힙에서 같은 

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