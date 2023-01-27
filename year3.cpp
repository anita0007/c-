#include <iostream>
#include <string>
using namespace std;

int main(){
	int y;
	while(1){
		cout << "請輸入年份: ";
		cin >> y;
		if(y == EOF)
			break;
		if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
			cout << "閏年";
			break;
		}
		else{
			cout << "平年";
			break;
		}
	}
	return 0;
} 
