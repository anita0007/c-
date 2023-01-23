#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,a,b;
	cout << "有幾組測試資料: ";
	cin >> n;
	for(int i = 1;i <= n;i++){
		cout << "輸入資料a、資料b: (表示a~b)\n";
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
