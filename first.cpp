#include<iostream>
using namespace std;
int main()
{ 
	string s;
	cout<<"Enter a string:";
	cin>>s;
	cout<<"you have entered:";
	cout<<s<<endl;
	
	s.push_back('y');
	cout<<"After using push_back function:"<<s<<endl;
	
	s.pop_back();
	cout<<"After using pop_back function:"<<s<<endl;
	return 0;
}