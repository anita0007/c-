#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,y;
	cout << "��J���: ";
	cin >> n;
	for(int i = 0;i < n;i++){
		cout << "��J�~��: \n";
		cin >> y;
		if(y % 4 == 0 && y % 100 == 0 | y % 400 == 0)
			cout << "Case " << i << "�|�~\n";
		else
			cout <<"Case " << i << "���~\n";

		
	}

	
}
 
