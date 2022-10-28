#include<iostream>
using namespace std;
void Increment(int &s)
{
    s =s+30000;
    cout<<"salary inside the function is :"<<s<<endl;
}
int main()
{
    int sal=27000;
    Increment(sal);
    cout<<"salary inside the main: "<<sal<<endl;
    return 0;
}