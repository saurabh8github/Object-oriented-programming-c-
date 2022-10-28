#include<iostream>
using namespace std;
int main()
{ int num=0;
	while(num<=200)
	{
		cout<<"value is: "<<endl;
		if(num==150){fbreak;}
		num=num+10;
	}
	cout<<"out of the loop";
	return 0;
}