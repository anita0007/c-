#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,a,b,c;
	cout << "班級總人數:  ";
	cin >> n;
	cout << "請假同學的座號: (3位)";
	cin >> a >> b >> c;
	for(int i = n;i>0;i--){
		if(i == a){
			continue;
		}
		else if(i == b){
			continue;
		}
		else if(i == c){
			continue;
		} 
		cout << "NO." << i << endl;
	}
} 
