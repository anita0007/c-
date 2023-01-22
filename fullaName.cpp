#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstName,lastName;
	cout << "firstName: ";
	cin >> firstName;
	cout << "lastName: ";
	cin >> lastName;
	string fullName = firstName.append(lastName);
	cout << "fullName is : "<<fullName;
	return 0;
}
