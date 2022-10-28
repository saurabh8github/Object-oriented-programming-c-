#include<iostream>
using namespace std;
void salary_change(int s)
	{
   	 s=300000;
   	 cout<<"value inside function: "<<s<<endl;
	}
int main()
	{
	int sal=270000;
	salary_change(sal);
	cout<<"value inside main: "<<sal<<endl;
	return 0;

	}