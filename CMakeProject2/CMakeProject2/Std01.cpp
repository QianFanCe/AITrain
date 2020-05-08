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

//public 继承 子类访问权限和父类一样
//protected继承，父类public在子类降级为protected
//private继承, 父类public protect 在子类降级为private  --  完全不能用
struct Remi : public Role{
private:
	string skill;

public:
	Remi() {

	}
	//Role(name, age) 这里是调用
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
	//栈内存
	Remi remi = Remi("Remi", 500, "Red night city");
	remi.useSkill();
	remi.count();

	//类名创建对象 - 调用无参构造创建
	Remi remi2;

}
