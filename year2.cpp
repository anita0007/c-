#include <iostream>
#include <string>
using namespace std;

int main(){
	int y;
	cout << "��J�~���G�@";
	cin >> y;
	while(1){
		if(y == 0)
			break;
		if(y % 4 ==0&& y % 100 !=0 || y % 400 ==0 ){
			cout << "�|�~"; 
			break;
		}
		else{
			cout << "���~";
			break;
		}
	} 
}
