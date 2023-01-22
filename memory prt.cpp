 #include<stdio.h>
 #include<string>
 #include<iostream>
 using namespace std;
 int main(){
 	string food = "Pizza";
 	string* ptr = &food;
 	cout<<&food<<endl;
 	cout<<ptr;
 } 
