#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,t;
	int max = 0;
	cout << "�Z�ż�: ";
	cin >> n ;
	for(int a = 0;a < n;a++){
		cout << "�Z�W�H��: ";
		cin >> t;
		if(max < t){
			max = t;
		}
	}
	cout << "�n�ʶR���q���ƶq: " << max;
} 
