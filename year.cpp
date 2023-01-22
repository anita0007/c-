#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cout << "行數:";
	cin >> t;
	for(int i = 0;i < t;i++){
		int y;
		cout << "請輸入年份:\n ";
		cin >> y ;
		if(y%4 == 0 && y%100 == 0 | y%400)
			cout << "閏年\n";
		else
			cout << "平年\n";
	}
	return 0;
} 
