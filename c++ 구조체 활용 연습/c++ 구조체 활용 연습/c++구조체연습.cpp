#include <iostream>
#include <string.h>

using namespace std;



struct stu {
	char name[20];
	
	int stu_year;

	int ko;

	int math;

	int eng;

	float avg;

	void stu_average(stu) {
		avg = (ko + math + eng) / 3.0f;
	}

	void stu_insert1(stu* stus, stu stu){
		*stus = stu;
	}

	void stu_insert2(stu*stus, const char* _name, int stu_year, int ko, int eng, int math) {
		strcpy_s((name), sizeof(name), _name);
		
		stu_year = stu_year;
		ko = ko;
		eng = eng;
		math = math;
		
		avg = avg;
	}

	void stu_print(stu print){
		cout << "이름: " << name << endl;
		cout << "학년: " << stu_year << endl;
		cout << "국어: " << ko << endl;
		cout << "수학: " << math << endl;
		cout << "영어: " << eng << endl;
		cout << "평균: " << avg << endl;
	}

	void stu_printall(stu*print, int count) {
		for (int i = 0; i < count; i++) {
			cout << "이름: " <<print[i].name<< endl;
			cout << "학년: " <<print[i].stu_year<< endl;
			cout << "국어: " <<print[i].ko<< endl;
			cout << "수학: " <<print[i].math<< endl;
			cout << "영어: " << print[i].eng<< endl;
			cout << "평균: " <<print[i].avg << endl;

			return;
		}
	}

};



int main()

{

	struct stu stu = { "홍길동", 1, 90, 80, 70 };

	struct stu stus[2];



	//평균 저장

	stu.stu_average(stu);



	//stu[0]에 있는 맴버의 값을 stus[0]에 저장

	stu.stu_insert1(stus, stu);



	//stu[1]에 있는 맴버의 값을 전달된 값으로 저장

	stu.stu_insert2(stus + 1, "김길동", 2, 100, 90, 80);




	//전달된 stu를 출력 --> 평균 출력되어야 함

	stu.stu_print(stu);



	//배열 전체에 저장된 stu를 모두 출력 --> 평균 출력

	stu.stu_printall(stus, 2);



	return 0;

}

