#include "Std01.h"

using namespace std;

struct Role {
private:
	string name;
	int age;


public :
	Role() {

	}
	Role(string name, int age) {
		this->name = name;
		this->age = age;
	}



	void skill() {
		cout << "Hp++" << endl;
	}

	void say() {
		cout << this->name << this->age << endl;
	}
};

//public �̳� �������Ȩ�޺͸���һ��
//protected�̳У�����public�����ཱུ��Ϊprotected
//private�̳�, ����public protect �����ཱུ��Ϊprivate  --  ��ȫ������
struct Remi : public Role{
private:
	string skill;

public:
	Remi() {

	}
	//Role(name, age) �����ǵ���
	Remi(string name, int age, string skill) :Role(name, age) {
		this->skill = skill;
	}

	void useSkill() {
		cout << "use " << this->skill << endl;
	}

	void count() {
		vector<int> vec;

		for (int  i = 0; i < 5; i++)
		{
			vec.push_back(i);
		}
		
		vector<int> ::iterator v = vec.begin();
		while (v != vec.end()) {
			cout << *v;
			v++;
		}



	}

};



void action() {
	//ջ�ڴ�
	Remi remi = Remi("Remi", 500, "Red night city");
	remi.useSkill();
	remi.count();

	//������������ - �����޲ι��촴��
	Remi remi2;

}
