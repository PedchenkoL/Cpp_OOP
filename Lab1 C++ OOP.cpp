#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
 
using namespace std;
class Student {
public:
	string name;
	int age;
	string sex;
	string tel_num;
	string change;
	string change_thing;
	
	void nameAdd() {
		cout << endl;
		cout << "add ur name: " << endl;
		cin >> name;
	}
	
	void sexAdd() {
		cout << endl;
		cout << "add ur sex: " << endl;
		cin >> sex;
	}
	
	void ageAdd() {
		cout << endl;
		cout << "add ur age: " << endl;
		cin >> age;
	}
	
	void numAdd() {
		cout << endl;
		cout << "add ur number: " << endl;
		cin >> tel_num;
	}
	void statistic() {
		cout << name << endl;
		cout << sex << endl;
		cout << age << endl;
		cout << tel_num;
	}
	void sure() {
		cout << "would you change your info? " << endl;
		cin >>  change;
		if (change == "+") {
			cout << "what would you change? " << endl;
			cin >> change_thing;
			if (change_thing == "Name") {
				nameAdd();
				sure();
			}
			else if (change_thing == "Sex") {
				sexAdd();
				sure();
			}
			else if (change_thing == "Age") {
				ageAdd();
				sure();
			}
			else if (change_thing == "Number") {
				numAdd();
				sure();
			}
		}
		else {
//			break;
		}
	}
};

int main() {
	Student stud_1;
	stud_1.nameAdd();
	stud_1.sexAdd();
	stud_1.ageAdd();
	stud_1.numAdd();
	stud_1.sure();
//	cout << stud_1.age;
//	Student stud_2;
//	stud_1.nameAdd();
//	stud_1.sexAdd();
//	stud_1.ageAdd();
//	stud_1.numAdd();
//	
//	Student stud_3;
//	stud_1.nameAdd();
//	stud_1.sexAdd();
//	stud_1.ageAdd();
//	stud_1.numAdd();
	
	stud_1.statistic();
//	stud_2.statistic();
//	stud_3.statistic();
}
