#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cout << "���:";
	cin >> t;
	for(int i = 0;i < t;i++){
		int y;
		cout << "�п�J�~��:\n ";
		cin >> y ;
		if(y%4 == 0 && y%100 == 0 | y%400)
			cout << "�|�~\n";
		else
			cout << "���~\n";
	}
	return 0;
} 
