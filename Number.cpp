#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,p;
	int num0,num1,num2 = 0;
	cout << "��J�Ʀr�`�q: ";
	cin >> n;
	for(int i = 0; i < n;i++){
		cout << "�п�J�Ʀr: ";
		cin >> p;
		if(p % 3 == 0)
			num0++;
		else if(p % 3 == 1)
			num1++;
		else if(p % 3 == 2)
			num2++;
	}
	cout << num0 << " " << num1 << " " << num2 << " ";
} 
