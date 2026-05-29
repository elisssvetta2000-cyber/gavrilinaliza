
#include <iostream>
using namespace std;

class jar {
private:
	int money = 0;

public:

	void add(int addmoney) {
		if (addmoney >= 0) {
			money += addmoney;
			cout << "Вы положили в банку " << addmoney << " рублей" << endl;
		}
		else {
			cout << "Вы не можете положить в банку отрицательное количество денег" << endl;
		}
	}

	void get(int getmoney) {
		if (money >= getmoney) {
			money -= getmoney;
			cout << "Вы забрали из банки " << getmoney << " рублей" << endl;
		}
		else {
			cout << "У вас нет столько денег :(" << endl;
		}
	}

	int see() {
		return money;
	}
};

//class Human {
//private:
//	int age;
//
//public:
//	string name;
//
//	void Setage(int val) {
//		if (val >= 0 && val <= 150) {
//			age = val;
//		}
//		else {
//			cout << "Вы не человек" << endl;
//			age = -1;
//		}
//	}
//	int getAge() {
//		return age;
//	}
//};

//class Human {
//public:
//	int age;
//	string name;
//	void printInfo() {
//		cout << "Возраст: " << age << endl;
//		cout << "Имя: " << name << endl;
//	}
//};

//class Human {
//
//};

int main()
{
	setlocale(LC_ALL, "Russian");
	/*class Human{
	* public:
	*		int age; - поле
	*		string name; - поле
	*		
	* }
	* Human firstHum; - объект (экземпляр класса)
	*   |       |
	*  тип    перем.
	* firstHum.age = 20; - обращаемся к объекту и работаем с ним
	* класс - шабон, который хранит в себе данные; пользовательский тип данных
	* public: - общедоступный (из любой точки программы)
	* private: - в рамках класса
	* 
	*/

	//class Human {
	//public:
	//	int age;
	//	string name;
	//};
	//Human firstHum;
	//firstHum.age = 20;
	//class point {
	//public:
	//	int x;
	//	int y;
	//};
	//point p;
	//p.x = 30;
	//p.y = 10;

	//Human aaa;
	//aaa.name = "Я";
	//int o; cin >> o;
	//aaa.Setage(o);
	//cout << "=> " << aaa.name << endl;
	//cout << "=> " << aaa.getAge() << endl;

	//Human I;
	//I.age = 18;
	//I.name = "Я";
	//I.printInfo();
	//Human You;
	//You.age = 40;
	//You.name = "Ты";
	//You.printInfo();

	jar coffe;
	coffe.add(800);
	coffe.add(-100);
	coffe.get(500);
	coffe.get(500);
	cout << "На данный момент у вас в банке " << coffe.see() << " рублей" << endl;
}