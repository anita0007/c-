#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,a,b,c;
	cout << "�Z���`�H��:  ";
	cin >> n;
	cout << "�а��P�Ǫ��y��: (3��)";
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
