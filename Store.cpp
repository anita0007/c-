#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int n,a,x;
	int max = 0;
	int min = 10000000;
	cout << "Case:";
	cin >> n;
	cout << "�ө��`�ƶq: ";
	cin >> a;
	for(int i = 0;i <a;i++){
		cin >> x;
		if(max < x){
			max = x;
		}
		if(min > x){
			min = x;
		}	
	}
	cout << "�̤j��:" << max << "," << "�̤p��: " << min;
	
	int shortLength = (max-min)*2;
	cout << "�̵u�Z����: " << shortLength; 
	return 0;
} 

