#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,t;
	int max = 0;
	cout << "班級數: ";
	cin >> n ;
	for(int a = 0;a < n;a++){
		cout << "班上人數: ";
		cin >> t;
		if(max < t){
			max = t;
		}
	}
	cout << "要購買的電腦數量: " << max;
} 
