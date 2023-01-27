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
	cout << "坝┍羆计秖: ";
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
	cout << "程:" << max << "," << "程: " << min;
	
	int shortLength = (max-min)*2;
	cout << "程祏禯瞒: " << shortLength; 
	return 0;
} 

