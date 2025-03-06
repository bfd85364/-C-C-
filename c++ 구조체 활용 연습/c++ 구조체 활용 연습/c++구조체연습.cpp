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
		cout << "�̸�: " << name << endl;
		cout << "�г�: " << stu_year << endl;
		cout << "����: " << ko << endl;
		cout << "����: " << math << endl;
		cout << "����: " << eng << endl;
		cout << "���: " << avg << endl;
	}

	void stu_printall(stu*print, int count) {
		for (int i = 0; i < count; i++) {
			cout << "�̸�: " <<print[i].name<< endl;
			cout << "�г�: " <<print[i].stu_year<< endl;
			cout << "����: " <<print[i].ko<< endl;
			cout << "����: " <<print[i].math<< endl;
			cout << "����: " << print[i].eng<< endl;
			cout << "���: " <<print[i].avg << endl;

			return;
		}
	}

};



int main()

{

	struct stu stu = { "ȫ�浿", 1, 90, 80, 70 };

	struct stu stus[2];



	//��� ����

	stu.stu_average(stu);



	//stu[0]�� �ִ� �ɹ��� ���� stus[0]�� ����

	stu.stu_insert1(stus, stu);



	//stu[1]�� �ִ� �ɹ��� ���� ���޵� ������ ����

	stu.stu_insert2(stus + 1, "��浿", 2, 100, 90, 80);




	//���޵� stu�� ��� --> ��� ��µǾ�� ��

	stu.stu_print(stu);



	//�迭 ��ü�� ����� stu�� ��� ��� --> ��� ���

	stu.stu_printall(stus, 2);



	return 0;

}

