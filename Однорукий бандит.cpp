#include <cstdlib>
#include <Time.h>
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <queue>
#include <windows.h>
 
using namespace std;
class Line {
public:
	int val_1;
	int val_2;
	int val_3;
	int changeValue, changeValue_2, changeValue_3, changeValue_4;
	
	void Roll() {
		val_1 = rand() % 20 + 1;
		val_2 = rand() % 20 + 1;
		val_3 = rand() % 20 + 1;
		cout << val_1 << endl;
		cout << val_2 << endl;
		cout << val_3 << endl;
	}
	
	void Drum_1() {
		cout << "  #  " << endl;
		cout << "#   #" << endl;
		cout << "  #  " << endl;
	}
	
	void Drum_2() {
		cout << "  &  " << endl;
		cout << "&   &" << endl;
		cout << "  &  " << endl;
	}
	
	void Drum_3() {
		cout << "  $  " << endl;
		cout << "$   $" << endl;
		cout << "  $  " << endl;
	}
	void Drum_4() {
		cout << "  *  " << endl;
		cout << "*   *" << endl;
		cout << "  *  " << endl;	
	}
	
	void Vall_1_DrumRolling() {
		val_1 += val_1 % 4;
	while (val_1 >= 0) {
		if (val_1 >= changeValue) {
			val_1 -= changeValue;
			
			for (int k = 1; k < 5; k++) {
			if (k == changeValue_4) {
				Drum_1();
				Sleep(500);
				system("cls");
			}
			else if (k == changeValue_3) {
				Drum_2();
				Sleep(500);
				system("cls");
			}
			else if (k == changeValue_2) {
				Drum_3();
				Sleep(500);
				system("cls");
			}
			else if (k == changeValue) {
				Drum_4();
				Sleep(500);
				system("cls");
				}
			}	
		}
		else if (val_1 = changeValue) {
			Drum_4();
			Sleep(500);
			system("cls");
			break;
			}
		else if (val_1 = changeValue_2) {
			Drum_3();
			Sleep(500);
			system("cls");
			break;
			}
		else if (val_1 = changeValue_3) {
			Drum_2();
			Sleep(500);
			system("cls");
			break;
			}
		else if (val_1 = changeValue_4) {
			Drum_1();
			Sleep(500);
			break;
			system("cls");
			}
		
		
	}
		
		
		
		
}
	
	void Win() {
		if (val_1 == val_2 && val_2 == val_3 && val_3 == val_1) {
			cout << endl << "Winner, winner, chicken dinner!" << endl;
		}
		else if (val_2 == val_3) {
			cout << endl << "U are won a few... " << endl;
		}
		else if (val_3 == val_1) {
			cout << endl << "U are won a few... " << endl;
		}
		else if (val_1 == val_2) {
			cout << endl << "U are won a few... " << endl;
		}
	}
	
};
int main() {
	srand((unsigned)time(NULL));
	srand((unsigned)rand());
	Line line;
	line.changeValue = 4;
	line.changeValue_2 = 3;
	line.changeValue_3 = 2;
	line.changeValue_4 = 1;
	line.Roll();
	line.Win();
	line.Vall_1_DrumRolling();
}
