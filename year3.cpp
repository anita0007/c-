#include <iostream>
#include <string>
using namespace std;

int main(){
	int y;
	while(1){
		cout << "�п�J�~��: ";
		cin >> y;
		if(y == EOF)
			break;
		if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
			cout << "�|�~";
			break;
		}
		else{
			cout << "���~";
			break;
		}
	}
	return 0;
} 
