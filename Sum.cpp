#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,a,b;
	cout << "���X�մ��ո��: ";
	cin >> n;
	for(int i = 1;i <= n;i++){
		cout << "��J���a�B���b: (���a~b)\n";
		cin >> a >> b;
		int sum = 0;
		if( a % 2 == 0){	
			a++;
		}		
		for (int c = a;c <= b;c+=2){	
			sum +=c;
		}
		cout << "Case" << n << ":" << sum << endl;
	}
} 
