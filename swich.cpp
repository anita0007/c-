#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int grade;
	cout << "�п�J���Z: ";
	cin >> grade;
	switch(grade/10){
		case 9 :
			cout << "�A�u��!";
			break;
		case 8 :
			cout << "�[�[�o~��90�F";
			break;
		default :
			cout << "���A�n�B~";			 
	}
	return 0;
}
