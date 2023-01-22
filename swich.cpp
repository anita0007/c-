#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int grade;
	cout << "請輸入成績: ";
	cin >> grade;
	switch(grade/10){
		case 9 :
			cout << "你真棒!";
			break;
		case 8 :
			cout << "加加油~快90了";
			break;
		default :
			cout << "祝你好運~";			 
	}
	return 0;
}
