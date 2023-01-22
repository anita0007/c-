#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,y;
	cout << "輸入行數: ";
	cin >> n;
	for(int i = 0;i < n;i++){
		cout << "輸入年份: \n";
		cin >> y;
		if(y % 4 == 0 && y % 100 == 0 | y % 400 == 0)
			cout << "Case " << i << "閏年\n";
		else
			cout <<"Case " << i << "平年\n";

		
	}

	
}
 
