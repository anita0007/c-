#include <iostream> 
#include <string>
using namespace std;

int main(){
	int n,t,a,product;
	cout <<"�ӫ~�򩳼ƶq: ";
	cin >> n;
	cout << "�q���:";
	cin >> t;
	while(1){
		for(int i = 0;i < t;i++){
			cin >> a;
			if(a == 0){
				break;
			}
			if(a / n > 0){
				product = a / n;
			}
			
			else{
				product = a / n + 1;
			}
			cout << product <<endl; 
		}
		break;
	}
	return 0;
}
