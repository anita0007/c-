#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,b,c,d,e = 0;
	cout << "請輸入前四個數字: \n";
	cin >> a >> b >> c >> d; 
	if((b-a) == (d-c)){
		e = d + (d-c);
		cout << a <<" "<< b <<" "<< c <<" "<< d <<" "<< e <<" ";
	}
	else{
		e = d * (d/c);
		cout << a <<" "<< b <<" "<< c <<" "<< d <<" "<< e <<" ";
	}		
} 
